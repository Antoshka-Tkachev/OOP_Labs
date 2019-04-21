#pragma once
#include <string>
#include <iostream>

using namespace std;

class Human
{
protected: // почему не работает функция print в классе Boss и Student, если сделать ptivate?
	string name;
	string surname;
	string midname;
	int age;
public:
	Human();
	Human(string name, string surname, string midname, int age);
	virtual void print() = 0; //где писать override?
	~Human() {}
};


