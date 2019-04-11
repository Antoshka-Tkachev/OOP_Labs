#include "pch.h"
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

void Animal::move()
{
	cout << "Ходить!" << endl;
}

void  Animal::set_animal()
{
	cout << "Введите название животного: ";
	cin >> name;
	cout << "Введите скорость животного: ";
	cin >> speed;
}

void  Animal::get_animal()
{
	cout << "Название животного: " << name << endl;
	cout << "Скорость животного: " << speed << endl;
}