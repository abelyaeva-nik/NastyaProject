// myproject.cpp: ���������� ����� ����� ��� ����������� ����������.
//������ 1.0
#include "stdafx.h"
#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
	int count; // ���������� ��� ������ � switch
	double a, b; // ���������� ��� �������� ���������
	cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;
	switch (count) // ������ ��������� switch
	{
	case 1: // ���� count = 1
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MySum(a, b) << endl; // ��������� ��������
		break;
	}
	case 2: // ���� count = 2
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MySub(a, b) << endl; // ��������� ���������
		break;
	}
	case 3: // ���� count = 3
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MyMul(a, b) << endl; // ��������� ���������
		break;
	}
	case 4: // ���� count = 4
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MyDiv(a, b) << endl; // ��������� �������
		break;
	}
	default: // ���� count ����� ������ ������� ��������
		cout << "Nepravilni vvod" << endl;
	}
	system("pause");
	return 0;
}