#include "pch.h"
#include "Human.h"

Human::Human()
{
	name = "NoName";
	surname = "NoSurname";
	midname = "NoMidname";
	age = 0;
}

Human::Human(string name, string surname, string midname, int age)
{
	this->name = name;
	this->surname = surname;
	this->midname = midname;
	this->age = age;
}