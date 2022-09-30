#include <iostream>
#include <string>
using namespace std;
/*
* Спецификаторы доступа при наследовании
*/
class A
{
public:
	string msgOne = "Сообщение один";
private:
	string msgTwo = "Сообщение два";
protected:
	string msgThree = "Сообщение три";
};
class B : public A
{
public:
	void PrintMsg()
	{
		cout << msgOne << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	B b;
	b.PrintMsg();
	cout << b.msgOne;
	A a;
	cout << a.msgOne;
	
	return 0;
}