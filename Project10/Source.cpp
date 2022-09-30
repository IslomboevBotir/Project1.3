#include <iostream>
#include <string>
using namespace std;
class A
{
public:
	A()
	{
		msg = "Пустое сообщение";
	}
	A(string msg)
	{
		this->msg = msg;
	}
	void PrintMsg()
	{
		cout << msg << endl;
	}
private:
	string msg;
};
class B : public A
{
public:
	B():A()
	{

	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	B value;
	value.PrintMsg();
	return 0;
}