#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
using namespace std;

char y;

int main()

{
	setlocale(LC_ALL, "Russian");

//start:
	//cout << "Введите номер задания: ";
	//int nz;
	//cin >> nz;

	//if (nz == 1)
	//{
	//}


	//else
	//{
	//	cout << "ошибка!";
	//	goto start;
	//}


	//cout << "Хотите продолжить y/n?";
	//cin >> y;

	//if (y == 'y')
	//{
	//	system("cls");
	//	goto start;
	//}
	//else
	//{
	//	cout << "ошибка!";
	//	goto start;
	//}

	int x;
	cin >> x;

	switch (x)
	{
		case 6: 
	{
		cout << "x=6";
	}
	break;

	default:
	{

	}
	break;

	}








	system("pause");
	return 0;
}