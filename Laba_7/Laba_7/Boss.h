#pragma once
#include "Human.h"
#include <string>

using namespace std;

class Boss : public Human 
{
private:
	int number_of_workers;
public:
	Boss();
	Boss(int number_of_workers); // как сделать наследование этого конструктора?
	void print();
	~Boss() {}
};

