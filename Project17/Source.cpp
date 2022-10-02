#include <iostream>
#include <string>

using namespace std;

/*
* Порядок вызова деструктора при множественном наследовании
*/
class Car
{
public:
	Car()
	{
		cout << "Вызван Конструктор Car" << endl;
	}
	~Car()
	{
		cout << "Вызван Конструктор Car" << endl;
	}
	void Drive()
	{
		cout << "Я еду !" << endl;
	}
};
class AirPlan
{
public:
	AirPlan()
	{
		cout << "Вызван Конструктор AirPlan" << endl;
	}
	~AirPlan()
	{
		cout << "Вызван Конструктор AirPlan" << endl;
	}
	void Fly()
	{
		cout << "Я лечу !" << endl;
	}
};
class FlyingCar : public Car, public AirPlan
{
public:
	FlyingCar()
	{
		cout << "Вызван Конструктор FlyingCar" << endl;
	}
	~FlyingCar()
	{
		cout << "Вызван Конструктор FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	FlyingCar fc;
	cout << endl << endl;
	return 0;
}