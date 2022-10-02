#include <iostream>
#include <string>

using namespace std;

/*
* Множественное наследование
*/
class Car
{
public:
	Car()
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
};
int main()
{
	setlocale(LC_ALL, "ru");
	FlyingCar fc;
	return 0;
}