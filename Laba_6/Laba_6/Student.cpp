#include "pch.h"
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student::set_student()
{
	cout << "Введите имя студента: ";
	cin >> name;
	cout << "Введите возраст студента: ";
	cin >> age;
	cout << "Введите номер группы студента: ";
	cin >> group;
	cout << "Введите паспортные данные студента: ";
	cin >> pasport;
}
void Student::get_student()
{
	cout << "Имя студента: " << name << endl;
	cout << "Возраст студента: " << age << endl;
	cout << "Номер группы студента: " << group << endl;
	cout << "Паспортные данные студента: " << pasport << endl;
}