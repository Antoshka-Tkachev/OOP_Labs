#pragma once
#include <string>
#include <iostream>

using namespace std;

class Human
{
protected: 
	string name;
	string surname;
	string midname;
	int age;
public:
	Human();
	Human(string name, string surname, string midname, int age);
	virtual void print() = 0;
	~Human() {}
};


