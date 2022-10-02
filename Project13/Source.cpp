#include <iostream>
#include <string>

using namespace std;

/*
* Виртуальный деструктор
*/
class A
{
public:
	A()
	{
		
	}
	virtual ~A() = 0;
};

class B : public A
{
public:
	B()
	{
		
	}
	 ~B() override
	{
		
	}
};
A::~A() {};
int main()
{
	setlocale(LC_ALL, "ru");
	A* bptr = new B;
	delete bptr;
	return 0;
}