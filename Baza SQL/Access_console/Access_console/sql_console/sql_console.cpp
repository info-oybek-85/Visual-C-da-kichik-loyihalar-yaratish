// sql_console.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace System::Data::OleDb; // SqlServerCe;

int main(array<System::String ^> ^args)
{
	//консолниг матнига ранг бериш:
 Console::ForegroundColor = ConsoleColor::Yellow;
 // Connection синфи объектини яратиш
 auto Подключение = gcnew OleDbConnection();
 // Уни уланиш ыаторига юбориш:
 Подключение->ConnectionString = "Data Source=\"Oybek.mdb\";User " + 
 "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"; 
 Подключение->Open();
 // Command синфи объектини яратиш:
 auto Команда = gcnew OleDbCommand();
 Команда->Connection = Подключение;
 // Уни SQL-командаларига жщнатиш :
 Команда->CommandText = "Select * From [talaba]";
  // Хамма ёзилганлар танланади ва ФИО устуни бщйича сараланади:
 // Команда->CommandText = "Select * From [БД телефонов] order by ФИО"; 
 //"Номер п/п" усутуни бўйича эса:
 // Команда->CommandText = "Select * From [БД телефонов] ORDER BY 'Номер п/п'"; 
 // SQL-командасини бажариш:
 OleDbDataReader ^ Читатель = Команда-> 
 ExecuteReader(System::Data::CommandBehavior::CloseConnection); 
 Console::WriteLine("Таблица БД:\n");
 while (Читатель->Read() == true)
 // Цикл хали хамма ёзувларни ўқигани йўқ
 // Читатель->FieldCount - қаторлардаги майдонлар сони.
 // Бу ерда 3 та майдон: 0, 1 и 2.
 // Минус прижимает строку влево:
 Console::WriteLine("{0,2} {1,20} {2} {3}", Читатель->GetValue(0), 
 Читатель->GetValue(1), Читатель->GetValue(2), Читатель->GetValue(3)); 
 Читатель->Close(); Подключение->Close();
 // Қандайдир тугмани босилгунча кутиб туради
 Console::ReadKey();
    return 0;
}
