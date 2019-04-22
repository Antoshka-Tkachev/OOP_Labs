#include "pch.h"
#include <iostream>
#include <string>
#include "Human.h"
#include "Boss.h"
#include "Student.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russain");
	Boss a("Boss", "Big Boss", "Very Big Boss", 40, 123);
	a.print();

	Student b;
	Human* ptr_human = &b;
	ptr_human->print();
}

