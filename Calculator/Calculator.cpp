// In the name of God !
//Calculator
//v2.0
#include "stdafx.h"
#include <iostream>
using namespace std;
void sum(double x, double y)
{
	double sum;
	sum = x + y;
	cout << sum;
}
void min(double x, double y)
{
	double min;
	min = x - y;
	cout << min;
}
void multi(double x, double y)
{
	double multi;
	multi = x*y;
	cout << multi;
}
void div(double x, double y)
{
	double div;
	div = x / y;
	cout << div;
}
void main()
{
	double x, y;
	char chr, asw;
	do
	{
		cout << "Enter your math practice : (like this '5/9')" << endl;
		cin >> x >> chr >> y;
		cout << "________" << endl;
		cout << " =";
		switch (chr)
		{
		case '+':sum(x, y); break;
		case '-':min(x, y); break;
		case '*':multi(x, y); break;
		case '/':if (y != 0) div(x, y); else cout << "Eror!!!!"; break;
		default:cout << "Error!!!!";
		}
		cout << endl;
		cout << "Do you wanna continue:(y/n)" << endl;
		cin >> asw;
	} while (asw == 'y' || asw == 'Y');
	cout << "Press any key to continue . . .";
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\