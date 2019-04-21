#include "pch.h"
#include "Student.h"

Student::Student() : Human()
{
	on_lesson = true;
}

Student::Student(bool on_lesson) : Human(name, surname, midname, age)
{
	this->on_lesson = on_lesson;
}

void Student::print()
{
	cout << name << endl;
	cout << surname << endl;
	cout << midname << endl;
	cout << age << endl;
	cout << on_lesson << endl;
}