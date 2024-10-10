// 1-lab.cpp : main project file.

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "stdlib.h"

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
    Console::WriteLine("a[n][m] massiv elementlarini [-10000; 10000] oraliqdagi tasodifiy sonlar bilan to‘ldiring.");
		Console::WriteLine("Massiv elementlaridan qiymati juft  bo‘lganlarining yig‘indisini toping.");
      int a[10][10];
	 int n,m; cin>>n>>m;
	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 a[i][j]=rand()%50+1;
		 cout<<"a["<<i<<" , "<<j<<"]= "<<a[i][j]<<endl;
		 }}
	 cout<<"Juftlari____________________"<<endl;
   for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 if(a[i][j]%2==0){cout<<"a["<<i<<" , "<<j<<"] = "<<a[i][j]<<endl;}	 
		 }}
	getch();
	return 0;
}
