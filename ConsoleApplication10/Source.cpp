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
	cout << "������� ����� �������: ";
	int nz;
	cin >> nz;

	switch (nz)
	{


	case 1:
	{
		//1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20 % ������.
		//������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).


		int x, y, z;

		cout << "������� ����������������� �����������: ";
		cin >> x;
		cout << "������� ���� ������ (�� ������ ��� - 1, �� - 2 � �.�.): ";
		cin >> y;
		cout << "������� ��������� ���������� � ���: ";
		cin >> z;

		switch (y)
		{
		case 6:
		{
			cout << "���� �������� ��������� �����������: " << ((x*z) / 100) * 80 << endl;
		}
		break;

		case 7:
		{
			cout << "���� �������� ��������� �����������: " << ((x*z) / 100) * 80 << endl;
		}
		break;

		default:
		{
			cout << "���� �������� ��������� �����������: " << ((x*z) / 100) << endl;
		}
		break;

		}

	}
	break;


	case 2:
	{
		//2.	��������� ��������� ������� � ������ ������.������ 5 % ���������������, ���� ����� ������� ��������� 500 ����� � 10 % , ���� ������ 1000 �����.

		int x;
		cout << "������� ����� ����� �������: ";
		cin >> x;

		if ((x > 500) && (x < 1000))
		{
			cout << "���� ����� � ������ ������: " << x / 100 * 95 << endl;
		}

		else if (x > 1000)
		{
			cout << "���� ����� � ������ ������: " << x / 100 * 90 << endl;
		}

		else
		{
			cout << "���� �����: " << x << endl;
		}

	}
	break;


	case 3:
	{
		//3.	������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����.
		// ���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������
	chi:

		int x;
		cout << "������� ����� �� 1 �� 12: ";
		cin >> x;

		if (x == 1 || x == 2 || x == 12)
		{
			cout << "����" << endl;
		}

		else if (x == 3 || x == 4 || x == 5)
		{
			cout << "�����" << endl;
		}
		else if (x == 6 || x == 7 || x == 8)
		{
			cout << "����" << endl;
		}
		else if ((x == 9) || (x == 10) || (x == 11))
		{
			cout << "�����" << endl;
		}
		else
		{
			cout << "������" << endl;
			goto chi;
		}




	}
	break;

	case 4:
	{
		//4.	���� ��� ����� a, b, c.����������, ������� �� ����� ��� ���� �� ���� ���� ������
		int x, y, z;
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		cout << "������� ������ �����: ";
		cin >> z;

		if (x == y)
		{
			cout << "������ � ������ ����� ���������" << endl;
		}

		else if (y == z)
		{
			cout << "������ � ������ ����� ���������" << endl;
		}

		else if (x == z)
		{
			cout << " ������ � ������ ����� ���������" << endl;
		}
		else
		{
			cout << "������! ������ ����� ��� ���������� �����" << endl;
		}
	}
	break;

	case 5:
	{
		//5/	�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ���������(���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6).
	vv:

		int x;
		cout << "������� ������� ��� (�� ������ � 0 �� 24 �����): ";
		cin >> x;

		switch (x)
		{
		case 1:
		{
			cout << "����" << endl;
		}
		break;
		case 2:
		{
			cout << "����" << endl;
		}
		break;
		case 3:
		{
			cout << "����" << endl;
		}
		break;
		case 4:
		{
			cout << "����" << endl;
		}
		break;
		case 5:
		{
			cout << "����" << endl;
		}
		break;
		case 0:
		{
			cout << "����" << endl;
		}
		break;

		case 6:
		{
			cout << "����" << endl;
		}
		break;
		case 7:
		{
			cout << "����" << endl;
		}
		break;
		case 8:
		{
			cout << "����" << endl;
		}
		break;
		case 9:
		{
			cout << "����" << endl;
		}
		break;
		case 10:
		{
			cout << "����" << endl;
		}
		break;
		case 11:
		{
			cout << "����" << endl;
		}
		break;

		case 12:
		{
			cout << "����" << endl;
		}
		break;
		case 13:
		{
			cout << "����" << endl;
		}
		break; 
		case 14:
		{
			cout << "����" << endl;
		}
		break; 
		case 15:
		{
			cout << "����" << endl;
		}
		break; 
		case 16:
		{
			cout << "����" << endl;
		}
		break; 
		case 17:
		{
			cout << "����" << endl;
		}
		break;

		case 18:
		{
			cout << "�����" << endl;
		}
		break;
		case 19:
		{
			cout << "�����" << endl;
		}
		break;
		case 20:
		{
			cout << "�����" << endl;
		}
		break;
		case 21:
		{
			cout << "�����" << endl;
		}
		break;
		case 22:
		{
			cout << "�����" << endl;
		}
		break;
		case 23:
		{
			cout << "�����" << endl;
		}
		break;
		case 24:
		{
			cout << "�����" << endl;
		}
		break;

		default:
		{
			cout << "������" << endl;
			goto vv;
		}


		}





	}
	break;

	case 6:
	{
		//1.	���� ��� ����� a � b.����������� � ������� ��������, � ���������� �������� ����� ������ ���� ���� �� ���������������, ���� ��� ����� ������ ���� � ����� �������� �� ����, ���� ��� �� ���.
			//1 a = -3;  b = 3.5; 2 a = 5.8;  b = 2.7; 3 a = -8;  b = -3.5;
		float a, b;
		a = -3;
		b = 3.5;
		cout << "a = -3;  b = 3.5" << endl;

	}
	break;





	}
			
			
			
			
			
			






	cout << "������ ���������� 0/1?";
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
		cout << "������!";
		goto start;
	}
	break;


	}

	system("pause");
	return 0;
}