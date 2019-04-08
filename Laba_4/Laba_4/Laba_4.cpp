#include "pch.h"
#include <iostream>
#include <string>

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

	Child() // конструктор по умолчанию
	{
		name = "NoName";
		surname = "NoSurname";
		age = 0;
	}

	Child(string nameVal, string surnameVal) // конструктор с параметрами
	{
		name = nameVal;
		surname = surnameVal;
		age = 0;
	}

	Child(string nameVal, string surnameVal, int ageVal) : name(nameVal), surname(surnameVal), age(ageVal) // инициализирующий конструктор
	{

	}

	Child(const Child &object) // копирующий конструктор
	{
		name = object.name;
		surname = object.surname;
		age = object.age;
	}

	~Child() {} // деструктор
};

class Tiles
{
public:
	string brand;
	float size_h;
	float size_w;
	float price;
	void getData();

	Tiles() // по умолчанию
	{
		brand = "NoBrend";
		size_h = 0;
		size_w = 0;
		price = 0;
	}

	Tiles(string brandVal, float size_hVal, float size_wVal) // с параметрами
	{
		brand = brandVal;
		size_h = size_hVal;
		size_w = size_wVal;
		price = 0;
	}

	Tiles(string brandVal, float size_hVal, float size_wVal, float priceVal) : brand(brandVal), size_h(size_hVal), size_w(size_wVal), price(priceVal) // инициализирующий конструктор
	{

	}

	Tiles(const Tiles &object) // копирования
	{
		brand = object.brand;
		size_h = object.size_h;
		size_w = object.size_w;
		price = object.price;
	}
	~Tiles() {} // дуструктор
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

	Complex() // по умолчанию
	{
		x = 0;
		y = 0;
	}

	Complex(float x_yVal) // с параметром
	{
		x = x_yVal;
		y = x_yVal;
	}

	Complex(float xVal, float yVal): x(xVal), y(yVal) // Инициалиирующий
	{

	}

	Complex(const Complex &object) // копирования 
	{
		x = object.x;
		y = object.y;
	}
	~Complex() {} // деструктор
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

	Vector() // по умолчанию
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector(float x_y_zVal) // с параметром
	{
		x = x_y_zVal;
		y = x_y_zVal;
		z = x_y_zVal;
	}

	Vector(float xVal, float yVal, float zVal) : x(xVal), y(yVal), z(zVal) // Инициалиирующий
	{

	}

	Vector(const Vector &object) // копирования 
	{
		x = object.x;
		y = object.y;
		z = object.z;
	}
	~Vector() {} // деструктор

};

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	cout << "Введите номер задания: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		Child child_1, child_2;
		cout << "Введите информацию о первом ребенке:" << endl;
		child_1.set_info();
		cout << "Введите информацию о втором ребенке:" << endl;
		child_2.set_info();
		cout << "Информация о первом ребенке:" << endl;
		child_1.get_info();
		cout << "Информация о втором ребенке:" << endl;
		child_2.get_info();
	}
	break;

	case 2:
	{
		Tiles tile_1, tile_2;
		cout << "Введите информацию о первом виде кафеля:" << endl;
		cout << "Введите бренд кафеля: ";
		cin >> tile_1.brand;
		cout << "Введите высоту кафеля: ";
		cin >> tile_1.size_h;
		cout << "Введите ширину кафеля: ";
		cin >> tile_1.size_w;
		cout << "Введите цену кафеля: ";
		cin >> tile_1.price;

		cout << "Введите информацию о втором виде кафеля:" << endl;
		cout << "Введите бренд кафеля: ";
		cin >> tile_2.brand;
		cout << "Введите высоту кафеля: ";
		cin >> tile_2.size_h;
		cout << "Введите ширину кафеля: ";
		cin >> tile_2.size_w;
		cout << "Введите цену кафеля: ";
		cin >> tile_2.price;

		cout << "\nИнформация о первом виде кафеля:" << endl;
		tile_1.getData();
		cout << "\nИнформацию о втором виде кафеля:" << endl;
		tile_2.getData();
	}
	break;

	case 3:
	{
		Complex number;
		cout << "Введите число: " << endl;
		number.set_info();
		cout << "\nЗначение числа: " << endl;
		number.get_info();
		number.abs();
	}
	break;

	case 4:
	{
		Vector vector_1, vector_2, vector_sum, vector_sub;
		cout << "Введите первый вектор: " << endl;
		vector_1.set_info();
		cout << "Введите второй вектор: " << endl;
		vector_2.set_info();

		cout << "\nЗначение координат первого вектора: " << endl;
		vector_1.get_info();
		cout << "\nЗначение координат второго вектора: " << endl;
		vector_2.get_info();

		cout << "\nСумма координат первого и второго вектора: " << endl;
		vector_sum.sum(vector_1, vector_2);
		vector_sum.get_info();

		cout << "\nРазность координат первого второго вектора: " << endl;
		vector_sub.sub(vector_1, vector_2);
		vector_sub.get_info();

		cout << "\nМодуль первого вектора: ";
		vector_1.abs();
		cout << "\nМодуль второго вектора: ";
		vector_2.abs();
	}
	break;
	default:
		break;
	}
}

void Child::set_info()
{
	cout << "Введите имя ребенка:";
	cin >> name;
	cout << "Введите фамилию ребенка: ";
	cin >> surname;
	cout << "Введите возраст ребенка: ";
	cin >> age;
}

void Child::get_info()
{
	cout << "Имя ребенка: " << name << endl;
	cout << "Фамилия ребенка: " << surname << endl;
	cout << "Возраст ребенка: " << age << endl;
}

void Tiles::getData()
{
	cout << "Бренд кафеля" << brand << endl;
	cout << "Высота кафеля" << size_h << endl;
	cout << "Ширина кафеля" << size_w << endl;
	cout << "Цена кафеля" << price << endl;
}

void Complex::set_info()
{
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;
}

void Complex::get_info()
{
	cout << "Значение X: " << x << endl;
	cout << "Значение Y: " << y << endl;
}

void Complex::abs()
{
	float result = sqrt(x * x + y * y);
	cout << "\nМодуль числа равен: " << result << endl;
}

void Vector::set_info()
{
	cout << "Введите X: ";
	cin >> x;
	cout << "Введите Y: ";
	cin >> y;
	cout << "Введите Z: ";
	cin >> z;
}

void Vector::get_info()
{
	cout << "Значение X: " << x << endl;
	cout << "Значение Y: " << y << endl;
	cout << "Значение Z: " << z << endl;
}

void Vector::sum(Vector a, Vector b)
{
	x = a.x + b.x;
	y = a.y + b.y;
	z = a.z + b.z;
}

void Vector::sub(Vector a, Vector b)
{
	x = a.x - b.x;
	y = a.y - b.y;
	z = a.z - b.z;
}

void Vector::abs()
{
	float result = sqrt(x*x + y * y + z * z);
	cout << result << endl;
}