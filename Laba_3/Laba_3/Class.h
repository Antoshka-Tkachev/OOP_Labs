#pragma once

using namespace std;

class Child
{
private:
	string name;
	string surname;
	int age;
public:
	void set_info();
	void get_info();
};

class Tiles
{
public:
	string brand;
	float size_h;
	float size_w;
	float price;
	void getData();
};

class Complex
{
private:
	float x;
	float y;
public:
	void set_info();
	void get_info();
	void abs();
};

class Vector
{
private:
	float x;
	float y;
	float z;
public:
	void set_info();
	void get_info();
	void sum(Vector a, Vector b);
	void sub(Vector a, Vector b);
	void abs();
};