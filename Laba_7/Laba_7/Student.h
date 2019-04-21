#pragma once
#include "Human.h"
#include <string>

using namespace std;

class Student : public Human 
{
private:
	bool on_lesson;
public:
	Student();
	Student(bool on_lesson); // как сделать наследование этого конструктора?
	void print();
	~Student() {}
};

