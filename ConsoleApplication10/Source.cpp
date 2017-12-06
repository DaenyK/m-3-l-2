#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
using namespace std;

char y;

int main()

{
	setlocale(LC_ALL, "Russian");


	/*int x;
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

	}*/

start:
	cout << "Введите номер задания: ";
	int nz;
	cin >> nz;

	switch (nz)
	{


	case 1:
	{
		//1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20 % скидка.
		//Ввести продолжительность разговора и день недели(цифра от 1 до 7).


		int x, y, z;

		cout << "введите продолжительность переговоров: ";
		cin >> x;
		cout << "введите день недели (по логике пон - 1, вт - 2 и т.д.): ";
		cin >> y;
		cout << "введите стоимость переговора в час: ";
		cin >> z;

		switch (y)
		{
		case 6:
		{
			cout << "ваша итоговая стоимость переговоров: " << ((x*z) / 100) * 80 << endl;
		}
		break;

		case 7:
		{
			cout << "ваша итоговая стоимость переговоров: " << ((x*z) / 100) * 80 << endl;
		}
		break;

		default:
		{
			cout << "ваша итоговая стоимость переговоров: " << ((x*z) / 100) << endl;
		}
		break;

		}

	}
	break;


	case 2:
	{
		//2.	Вычислить стоимость покупки с учетом скидки.Скидка 5 % предоставляется, если сумма покупки превышает 500 тенге и 10 % , если больше 1000 тенге.

		int x;
		cout << "введите сумму вашей покупки: ";
		cin >> x;

		if ((x > 500) && (x < 1000))
		{
			cout << "ваша сумма с учетом скидки: " << x / 100 * 95 << endl;
		}

		else if (x > 1000)
		{
			cout << "ваша сумма с учетом скидки: " << x / 100 * 90 << endl;
		}

		else
		{
			cout << "ваша сумма: " << x << endl;
		}

	}
	break;


	case 3:
	{
		//3.	Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года.
		// Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке
	chi:

		int x;
		cout << "введите число от 1 до 12: ";
		cin >> x;

		if (x == 1 || x == 2 || x == 12)
		{
			cout << "Зима" << endl;
		}

		else if (x == 3 || x == 4 || x == 5)
		{
			cout << "Весна" << endl;
		}
		else if (x == 6 || x == 7 || x == 8)
		{
			cout << "Лето" << endl;
		}
		else if ((x == 9) || (x == 10) || (x == 11))
		{
			cout << "Осень" << endl;
		}
		else
		{
			cout << "Ошибка" << endl;
			goto chi;
		}




	}
	break;

	case 4:
	{
		//4.	Даны три числа a, b, c.Определить, имеется ли среди них хотя бы одна пара равных
		int x, y, z;
		cout << "введите первое число: ";
		cin >> x;
		cout << "введите второе число: ";
		cin >> y;
		cout << "введите третье число: ";
		cin >> z;

		if (x == y)
		{
			cout << "первое и второе числа одинаковы" << endl;
		}

		else if (y == z)
		{
			cout << "второе и третье числа одинаковы" << endl;
		}

		else if (x == z)
		{
			cout << " первое и третье числа одинаковы" << endl;
		}
		else
		{
			cout << "ошибка! скорее всего нет одинаковых чисел" << endl;
		}
	}
	break;

	case 5:
	{
		//5/	Написать программу для определения времени суток по данному текущему времени и вывести сообщение(утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6).
	vv:

		int x;
		cout << "введите текущий час (по логике с 0 до 24 часов): ";
		cin >> x;

		switch (x)
		{
		case 1:
		{
			cout << "ночь" << endl;
		}
		break;
		case 2:
		{
			cout << "ночь" << endl;
		}
		break;
		case 3:
		{
			cout << "ночь" << endl;
		}
		break;
		case 4:
		{
			cout << "ночь" << endl;
		}
		break;
		case 5:
		{
			cout << "ночь" << endl;
		}
		break;
		case 0:
		{
			cout << "ночь" << endl;
		}
		break;

		case 6:
		{
			cout << "утро" << endl;
		}
		break;
		case 7:
		{
			cout << "утро" << endl;
		}
		break;
		case 8:
		{
			cout << "утро" << endl;
		}
		break;
		case 9:
		{
			cout << "утро" << endl;
		}
		break;
		case 10:
		{
			cout << "утро" << endl;
		}
		break;
		case 11:
		{
			cout << "утро" << endl;
		}
		break;

		case 12:
		{
			cout << "день" << endl;
		}
		break;
		case 13:
		{
			cout << "день" << endl;
		}
		break; 
		case 14:
		{
			cout << "день" << endl;
		}
		break; 
		case 15:
		{
			cout << "день" << endl;
		}
		break; 
		case 16:
		{
			cout << "день" << endl;
		}
		break; 
		case 17:
		{
			cout << "день" << endl;
		}
		break;

		case 18:
		{
			cout << "вечер" << endl;
		}
		break;
		case 19:
		{
			cout << "вечер" << endl;
		}
		break;
		case 20:
		{
			cout << "вечер" << endl;
		}
		break;
		case 21:
		{
			cout << "вечер" << endl;
		}
		break;
		case 22:
		{
			cout << "вечер" << endl;
		}
		break;
		case 23:
		{
			cout << "вечер" << endl;
		}
		break;
		case 24:
		{
			cout << "вечер" << endl;
		}
		break;

		default:
		{
			cout << "ошибка" << endl;
			goto vv;
		}


		}





	}
	break;

	case 6:
	{
		//1.	Даны два числа a и b.Разработать и описать алгоритм, в результате которого числа меняют свой знак на противоположный, если они имеют разный знак и будут заменены на нули, если это не так.
			//1 a = -3;  b = 3.5; 2 a = 5.8;  b = 2.7; 3 a = -8;  b = -3.5;
		float a, b;
		a = -3;
		b = 3.5;
		cout << "a = -3;  b = 3.5" << endl;

	}
	break;





	}
			
			
			
			
			
			






	cout << "Хотите продолжить 0/1?";
	cin >> y;

	switch (y)
	{

	case 1:
	{
		system("cls");
		goto start;
	}
	break;

	default:
	{
		cout << "ошибка!";
		goto start;
	}
	break;


	}

	system("pause");
	return 0;
}