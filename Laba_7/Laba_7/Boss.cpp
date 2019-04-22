#include "pch.h"
#include "Boss.h"

Boss::Boss() : Human()
{
	number_of_workers = 0;
}

Boss::Boss(string name, string surname, string midname, int age, int number_of_workers) : Human(name, surname, midname, age)
{
	this->number_of_workers = number_of_workers;
}

void Boss ::print()
{
	cout << name << endl;
	cout << surname << endl;
	cout << midname << endl;
	cout << age << endl;
	cout << number_of_workers << endl;
}
