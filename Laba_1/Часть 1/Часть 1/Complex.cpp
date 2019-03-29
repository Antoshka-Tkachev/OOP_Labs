#include "pch.h"
#include <iostream>
#include "Complex.h"
#include <string>

using namespace std;

float Enter()
{
	string proverka;
again_1:
	cin >> proverka;
	for (int i = 0; i < proverka.length(); i++)
		if ((proverka[i] < '0' || proverka[i] > '9') && proverka[i] != '.')
		{
			cout << "Ошибка ввода!\nВведите число заново: ";
			goto again_1;
		}
	return stof(proverka);
}

void T::sum()
{
	if (y1 + y2 >= 0)
		cout << "\nСумма: " << x1 + x2 << "+" << y1 + y2 << "*i" << endl;
	else
		cout << "\nСумма: " << x1 + x2 << y1 + y2 << "*i" << endl;
}

void T::diff()
{
	if (y1 - y2 >= 0)
		cout << "\nРазность: " << x1 - x2 << "+" << y1 - y2 << "*i" << endl;
	else
		cout << "\nРазность: " << x1 - x2 << y1 - y2 << "*i" << endl;
}

void T::pr()
{
	if (x1 * y2 + x2 * y1 >= 0)
		cout << "\nПроизведение: " << x1 * x2 - y1 * y2 << "+" << x1 * y2 + x2 * y1 << "*i" << endl;
	else
		cout << "\nПроизведение: " << x1 * x2 - y1 * y2 << x1 * y2 + x2 * y1 << "*i" << endl;
}

void T::del()
{
	if ((double)(x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) >= 0)
		cout << "\nЧастное: " << (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2) << "+" << (x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << "*i" << endl;
	else
		cout << "\nЧастное: " << (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2) << (x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << "*i" << endl;
}

void T::pr_alfa()
{
	if (y1 * alfa >= 0)
		cout << "\nПроизведение: " << (x1 * alfa) << "+" << (y1 * alfa) << "*i" << endl;
	else
		cout << "\nПроизведение: " << (x1 * x2 - y1 * y2) << (x1 * y2 + x2 * y1) << "*i" << endl;
}