/*
Copyright (c) 2017, comScore Inc. All rights reserved.
*/
COMSCORE.SiteRecruit.Broker.config = {
	sv: "scor",
	cddsDomains: 'microsoft.com|xbox.com|microsoftstore.com',
	cddsInProgress: 'cddsinprogress',
	domainSwitch: 'tracking3p',
	domainMatch: '([\\da-z\.-]+\.com)',
	delay: 0,
	cddsIntervalMax: 10,

	crossDomainCheck: function() {
		if (this.cddsIntervalMax > 1) {
			this.cddsIntervalMax --;

			if (COMSCORE.SiteRecruit.Utils.UserPersistence.getCookieValue(this.cddsInProgress) != false ) {
				COMSCORE.SiteRecruit.DDKeepAlive.setDDTrackerCookie();
				COMSCORE.SiteRecruit._halt = true;
				this.clearCrossDomainCheck();
			}
		}
		else {
			this.clearCrossDomainCheck();
		}
	},

	clearCrossDomainCheck: function() {
		window.clearInterval(crossDomainInterval);
	},

	isolateDomain: function(a) {
		a = a.substring(a.indexOf("//")+2,a.length);
		a = a.substring(0,a.indexOf("/"));
		return a;
	},

	testMode: false,
	addEventDelay: 1000,
	
	cookie:{
		name: 'msresearch',
		path: '/',
		domain:  '.office.com' ,
		duration: 90,
		rapidDuration: 0,
		expireDate: ''
	},
	tracker:{
		std:'http://support.office.com/core/SiteRecruit_Tracker.htm?',
		ssl:'https://support.office.com/core/SiteRecruit_Tracker.htm?'
	},
	mobile:{
		match: 'iphone|ipad|ipod|android|opera mini|blackberry|windows (phone|ce)|iemobile|htc|nokia|bb10',
		halt: true
	},
	graceIncr:{
		name: 'graceIncr',
		initDelay: 0,
		clickDelay: 5000,
		match: 'https:\/\/(account|accounts|billing|commerce|support|login|live)\.(microsoft|live|xbox)\.(com)',
		altTag: 'class',
		htmlMatch: 'next'
	},
	
	prefixUrl: "",
	
		mapping:[
	// m=regex match, c=page config file (prefixed with configUrl), f=frequency
],

	//events
	Events: {
		beforeRecruit: function() {
							// ADD shortcuts
			var csbc = COMSCORE.SiteRecruit.Broker.config;
			var csuu = COMSCORE.SiteRecruit.Utils.UserPersistence;

			COMSCORE.SiteRecruit.Broker.custom = {
				captLinks: function(u) {
					var v = csuu.getCookieValue('captLinks');
					var c = "";

					if (v == false) {
						c = escape(u) + ';';
					}
					else {
						if (c.length + v.length < 1440) {
							c = v + escape(u) + ';';
						}
					}

					if (c != "") {
						csuu.createCookie('captLinks', c, {path:'/',domain:csbc.cookie.domain,duration:'s'});
					}
				},

				allTags: function(x,x1,y,z) {
					/*
						x:  Tag type
						x1: Alt Match pattern
						y:  Match pattern
						z: 
		  	  				1 - CDDS
		  	  				2 - graceIncr
		  	  				3 - captLinks
					*/

					if (x == 'class') {
						if (/msie (8|7)/i.test(navigator.userAgent)) { return; }
						var aTags = document.getElementsByClassName(x1);
					}
					else {
						var aTags = document.getElementsByTagName(x);
					}

					var sr_r = new RegExp(y,'i');
					for (var i = 0; i < aTags.length; i++) {
				 		if ( (x == 'a' && sr_r.test(aTags[i].href)) || (x == 'class' && sr_r.test(aTags[i].innerHTML)) || (x == 'a' && sr_r.test(aTags[i].innerHTML))	) {
							if (aTags[i].addEventListener) {
								if (z == 1) {
									aTags[i].addEventListener('click', function(event) {
										if (sr_r.test(this.href)) {	csuu.createCookie(csbc.domainSwitch, csbc.isolateDomain(this.href), {path:'/',domain:csbc.cookie.domain,duration:'s'})	}
									}, false);
								}
								else if (z == 2) {
									aTags[i].addEventListener('click',function(event){	csuu.createCookie("graceIncr", 1, {path:'/',domain:csbc.cookie.domain,duration:'s'})	},false);
								}
								else if (z == 3 && COMSCORE.isDDInProgress()) {
									aTags[i].addEventListener('click',function(event){ COMSCORE.SiteRecruit.Broker.custom.captLinks(this.href)	},false);	
								}
							}
							else {
								hrefURL = aTags[i].href;
								if (z == 1) {
									aTags[i].attachEvent('onclick', function() 	{	csuu.createCookie(csbc.domainSwitch, csbc.isolateDomain(hrefURL), {path:'/',domain:csbc.cookie.domain,duration:'s'})	});
								}
								else if (z == 2) {
									aTags[i].attachEvent('onclick',function()	{	csuu.createCookie("graceIncr", 1, {path:'/',domain:csbc.cookie.domain,duration:'s'})	});
								}
								else if (z == 3 && COMSCORE.isDDInProgress()) {
									aTags[i].attachEvent('onclick',function()	{ 	COMSCORE.SiteRecruit.Broker.custom.captLinks(this.href)	} );	
								}
							}
						}
 					}
				}
			};

			// Initialize graceIncr cookie
			var gIdelay = 0;
			if (COMSCORE.SiteRecruit.Utils.UserPersistence.getCookieValue("graceIncr") == 1) {	gIdelay = 5000;	}
			setTimeout(function(){COMSCORE.SiteRecruit.Utils.UserPersistence.createCookie("graceIncr", 0, {path:'/',domain:csbc.cookie.domain,duration:'s'})},gIdelay);

			// ADD onclick EVENTS FOR CDDS
			setTimeout(function() { COMSCORE.SiteRecruit.Broker.custom.allTags('a','',csbc.cddsDomains,1) }, csbc.addEventDelay );
			setTimeout(function() { COMSCORE.SiteRecruit.Broker.custom.allTags('a','',csbc.graceIncr.match,2) }, csbc.addEventDelay );

			//REMOVED GRACEINCR CODE FOR SIGN IN

if(/^http(s)?\:\/\/odcsup\.weeklymain\.officeapps\.live-int\.com/i.test(window.location.toString()) ){
				COMSCORE.SiteRecruit.Broker.config.cookie.domain = 'live-int.com';
			}
			
			if(!(document.getElementsByName('ms.opt_pnm')[0] && document.getElementsByName('ms.opt_pnm')[0].getAttribute('content') != null)){
					//"&projName="+document.getElementsByName('ms.opt_pnm')[0].getAttribute('content');	
					//COMSCORE.SiteRecruit.Broker.config.mapping[0].halt = true;
			}
			try{
			  if(/en-us\/(guided\/install-office|(Article)\/(Install-Office-4414eaaf-0478-48be-9c42-23adc4716658|Find-your-product-key-for-Office-2013-Office-365-Home-Office-365-Personal-Office-365-University-12a5763a-d45c-4685-8c95-a44500213759|Activate-Office-2013-Office-365-Home-or-Office-365-Personal-1144e0de-e849-496e-8e33-ed6fb1b34202|Sign-in-to-Office-b9582171-fd1f-4284-9846-bdd72bb28426|Install-Office-365-Home-Personal-or-University-7a28382b-7015-4b5a-9d9b-650d15742c95|Repair-Office-programs-7821d4b6-7c1d-4205-aa0e-a6b40c5bb88b|Find-and-start-Office-icons-or-shortcuts-in-Windows-8-Windows-8-1-or-Windows-RT-907ce545-6ae8-459b-8d9d-de6764a635d6|Choose-the-32-bit-or-64-bit-version-of-Office-2dee7807-8f95-4d0c-b5fe-6c6f49b8d261|Where-is-my-account-page--959ac957-8d37-4ae4-b1b6-d6e4874e013f|Cancel-your-Office-365-Home-or-Office-365-Personal-Subscription-d219b5a5-9443-44cf-bcfa-80a052bdd18c|Why-can-t-I-install-Office-2013-on-Windows-XP-or-Windows-Vista--eb587689-fc9b-4df1-8eab-0b7e92be52e8|Deactivate-an-Office-365-Home-Personal-or-University-install-767e3560-96ed-4b1c-806d-2fe01c529b1b|Error-code-30174-4-30125-4-or-30038-4-when-installing-Office-7bfabec6-76be-4cde-880e-819a9c569612|Error-code-0-3-when-installing-Office-6d10defa-163b-4e37-b17f-f9984d4e3dad|Install-and-use-multiple-versions-of-Office-on-the-same-PC-6ebb44ce-18a3-43f9-a187-b78c513788bf|Notice-to-renew-subscription-or-subscription-expired-in-Office-365-Personal-and-Home-or-Office-2013-4cabe32c-f594-4c0e-9191-3d3ade10cceb|Downloading-Office-2013-is-slow-0f09f357-3fef-42a6-b8aa-cef4c6c44bdf|Not-seeing-Office-on-your-My-Account-page-1d2efcd6-6b78-4ca1-Bc1e-58c93dcc87c4|-We-re-sorry%e2%80%a6-0x80070005-error-when-try-to-activate-Office-2013-4323c132-4859-4edb-a8e6-2d13b0740e31|Video-Activate-Office-for-iPad-726ab177-888c-4f2e-a0d9-8fb5c5ef3a36|Pre-release-or-Beta-version-of-Office-on-your-computer-error-77fe4b41-5ffe-4c95-b9e1-3927ce9cc124|Error-code-30145-4-when-installing-Office-229ff12d-983f-41da-bb57-80743bed4c5c|Error-code-30033-27-when-installing-Office-2ff458ab-0f87-46c7-99b3-c919f53395ea|Change-the-language-of-Office-365-Personal-or-Office-365-Home-f5c54ff9-a6fa-4348-a43c-760e7ef148f8|Nothing-happens-when-you-try-to-install-Office-2013-Office-365-Personal-or-Office-365-Home-1c23ab29-5e15-4421-854e-e76d9dc0df7f|I-uninstalled-Office-so-why-is-it-still-listed-on-my-account-page--8067a1f1-0cf2-4cb6-96e7-5fef14a12122|Error-code-30094-4-when-installing-Office-1ae700fc-9d7d-4ccc-aebd-9294ba2e758d|Error-code-30169-22-when-installing-Office-938f0a21-533b-4762-b347-7990fdf0ad01|Customizing-Office-2013-installations-1eede13d-3426-40cc-b30b-9aa40226bb9e|Why-can-t-I-install-Office-365-on-a-Windows-RT-device--d75f1836-0cd9-424d-8005-d50efbf10a89|Can-t-install-Office-2013-without-modern-Windows-c5c1e37a-3e09-4f39-b34d-fbaf5f2ab411|Can-t-go-from-Office-365-to-Office-2013-763112e1-969c-4bea-b9ab-66b724bf1bb1|Downgrading-from-Office-2013-to-Office-2010-b544bb23-ba7d-4651-98cb-4a1de000c7f1|Microsoft-Office-Error-0xC004C060-cf330f5a-eb59-4f30-a0d7-554a6076c910|Install-Office-2013-when-it-s-for-two-different-countries-75bc0e5b-c512-41ca-85e2-85cb99c0403d|Install-Office-2007-88a8e329-3335-4f82-abb2-ecea3e319657|Install-Office-2010-1b8f3c9b-bdd2-4a4f-8c88-aa756546529d|Fix-Office-365-or-Office-2013-install-errors-54554bb8-aa94-43c7-a685-408dd9868c0b|Troubleshoot-Office-install-62a98f21-b133-4c15-be94-270e46172e91))/i.test(window.location.toString()) ){
				//keep recruitment enabled...
			  }else if(/error|b73c485e-5b75-4f3f-a1f2-71b761633f6d|home\/chat/i.test(window.location.toString()) ){
				 COMSCORE.SiteRecruit.Broker.config.mapping[0].halt = true;
			 }
		  }catch(err){	}

					}
	}
};

//CUSTOM - CHECK FOR THE CROSS-DOMAIN COOKIE. IF PRESENT, HALT RECRUITMENT AND SET DD TRACKING COOKIE
var crossDomainInterval = window.setInterval('COMSCORE.SiteRecruit.Broker.config.crossDomainCheck()', '1000');
//END CROSS_DOMAIN DEPARTURE FUNCTIONALITY

//CUSTOM - ADD 5 SECOND DELAY ON CALLING BROKER.RUN()
if (COMSCORE.SiteRecruit.Broker.delayConfig == true)  {
	COMSCORE.SiteRecruit.Broker.config.delay = 5000;
}
window.setTimeout('COMSCORE.SiteRecruit.Broker.run()', COMSCORE.SiteRecruit.Broker.config.delay);
//END CUSTOM