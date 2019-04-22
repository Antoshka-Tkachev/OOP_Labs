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
	Boss(string name, string surname, string midname, int age, int number_of_workers);
	void print()override;
	~Boss() {}
};

