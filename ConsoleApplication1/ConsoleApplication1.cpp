// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <locale>;
#include "windows.h";
using namespace std;


void main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "1.ПІБ: Максімова Каріна Сергіївна\n";
	cout << "2.Дата народження: 26.06.1997" << endl;
	cout << "3.Місце народження: смт.Вовковинці" << endl;
	cout << "4.Місце проживання: Хмельницький" << endl;
	cout << "5.Місце навчання: школа №1" << endl;
	cout << "6.Вища освіта: ХУУП" << endl;
	system("pause");
}

