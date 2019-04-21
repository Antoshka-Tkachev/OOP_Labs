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
	Boss a;
	a.print();
	Student b;
	b.print();
}

