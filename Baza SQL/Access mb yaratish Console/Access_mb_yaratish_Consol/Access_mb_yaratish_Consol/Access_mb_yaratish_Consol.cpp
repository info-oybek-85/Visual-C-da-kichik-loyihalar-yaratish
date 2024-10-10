// Access_mb_yaratish_Consol.cpp : main project file.

#include "stdafx.h"

using namespace System;

using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Data::SqlClient;
int main(array<System::String ^> ^args)
{

	
	
ADOX::Catalog ^ Каталог = gcnew ADOX::Catalog(); 	
 try
 {
 Каталог->Create("Provider=Microsoft.Jet." +  "OLEDB.4.0;Data Source=new_BD.mdb"); 
 MessageBox::Show("Маълумотлар базаси new_BD.mdb муовфақиятли яратилди"); 
 }
 catch (System::Runtime::InteropServices::COMException ^ Ситуация)
 { MessageBox::Show(Ситуация->Message); }
 finally
 { Каталог = nullptr; }


 auto Подключение = gcnew OleDbConnection( 
 "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=new_BD.mdb"); 
 // подключения ни очиш:
 Подключение->Open();
 // Command синфининг обеъктини SQL сўровлари билан яратиш
 auto Команда = gcnew OleDbCommand("CREATE TABLE [" +
 "БД телефонов] ([Номер п/п] counter, [ФИО] ch" + 
 "ar(20), [Номер телефона] char(20))", Подключение);
 try // SQL буйруғларини бажарилиши:
 {
 Команда->ExecuteNonQuery();
 MessageBox::Show(
 "Структура таблицы 'БД телефонов' записана в пустую БД");
 }
 catch (Exception ^ Ситуация)
 { MessageBox::Show(Ситуация->Message); }
 //Подключение->Close();

 Команда = gcnew OleDbCommand(
 "INSERT INTO [БД телефонов] (" + "ФИО, [Номер телефона]) VALUES ('Света-X', '521-61-41')");  
 // МБ Жадвалига ёзиш учун ушбу команда албатта бўлиши керак:
 Команда->Connection = Подключение;
 // SQL буйруқларини бжариш:
 Команда->ExecuteNonQuery();
 MessageBox::Show(" 'БД телефонов' жадвалига маълумотлар ёзилди "); 



 
 Команда->Connection = Подключение;
 // Передаем ему SQL-команду:
 Команда->CommandText = "Select * From [БД телефонов]";
 // Выбрать все записи и сортировать их по колонке "ФИО":
 // Команда->CommandText = "Select * From [БД телефонов] order by ФИО"; 
 // Аналогично по колонке "Номер п/п":
 // Команда->CommandText =
 // "Select * From [БД телефонов] ORDER BY 'Номер п/п'"; 
 // Выполняем SQL-команду:
 OleDbDataReader ^ Читатель = Команда-> 
 ExecuteReader(System::Data::CommandBehavior::CloseConnection); 
 Console::WriteLine("Таблица БД:\n");
 while (Читатель->Read() == true)
 // Цикл, пока не будут прочитаны все записи.
 // Читатель->FieldCount - количество полей в строке.
 // Здесь три поля: 0, 1 и 2.
 // Минус прижимает строку влево:
 Console::WriteLine("{0,-3} {1,-15} {2,-15}", Читатель->GetValue(0), 
 Читатель->GetValue(1), Читатель->GetValue(2)); 
 Читатель->Close(); 
 // Приостановить выполнение программы до нажатия какой-нибудь клавиши: 
 Console::ReadKey(); 
 
 Подключение->Close();



    Console::WriteLine(L"Hello World");
    return 0;
}
