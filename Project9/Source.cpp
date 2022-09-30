#include <iostream>
#include <string>
using namespace std;
/*
* Порядок вызова конструктора при наследовании
*/
class A
{
public:
	A()
	{
		cout << "Вызвался конструктор класса А" << endl;
	}
	~A()
	{
		cout << "Вызвался деструктор класса А" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "Вызвался конструктор класса B" << endl;
	}
	~B()
	{
		cout << "Вызвался деструктор класса B" << endl;
	}
};
class C : public B
{
public:
	C()
	{
		cout << "Вызвался конструктор класса C" << endl;
	}
	~C()
	{
		cout << "Вызвался деструктор класса C" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	B b;
	return 0;
}