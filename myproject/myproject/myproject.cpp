// myproject.cpp: определ€ет точку входа дл€ консольного приложени€.
//¬≈–—»я 1.0
#include "stdafx.h"
#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
	int count; // переменна€ дл€ выбора в switch
	double a, b; // переменные дл€ хранени€ операндов
	cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;
	switch (count) // начало оператора switch
	{
	case 1: // если count = 1
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MySum(a, b) << endl; // выполнить сложение
		break;
	}
	case 2: // если count = 2
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MySub(a, b) << endl; // выполнить вычитание
		break;
	}
	case 3: // если count = 3
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MyMul(a, b) << endl; // выполнить умножение
		break;
	}
	case 4: // если count = 4
	{
		cout << "Vvedite pervoe chislo: ";
		cin >> a;
		cout << "Vvedite vtoroe chislo: ";
		cin >> b;
		cout << MyDiv(a, b) << endl; // выполнить деление
		break;
	}
	default: // если count равно любому другому значению
		cout << "Nepravilni vvod" << endl;
	}
	system("pause");
	return 0;
}