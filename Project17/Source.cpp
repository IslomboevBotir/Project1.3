#include <iostream>
#include <string>

using namespace std;

/*
* ������� ������ ����������� ��� ������������� ������������
*/
class Car
{
public:
	Car()
	{
		cout << "������ ����������� Car" << endl;
	}
	~Car()
	{
		cout << "������ ����������� Car" << endl;
	}
	void Drive()
	{
		cout << "� ��� !" << endl;
	}
};
class AirPlan
{
public:
	AirPlan()
	{
		cout << "������ ����������� AirPlan" << endl;
	}
	~AirPlan()
	{
		cout << "������ ����������� AirPlan" << endl;
	}
	void Fly()
	{
		cout << "� ���� !" << endl;
	}
};
class FlyingCar : public Car, public AirPlan
{
public:
	FlyingCar()
	{
		cout << "������ ����������� FlyingCar" << endl;
	}
	~FlyingCar()
	{
		cout << "������ ����������� FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	FlyingCar fc;
	cout << endl << endl;
	return 0;
}