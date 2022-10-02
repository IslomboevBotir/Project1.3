#include <iostream>
#include <string>

using namespace std;

/*
* вызов метода базового класса
*/

class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}
	virtual string GetMsg()
	{
		return msg;
	}
private:
	string msg;
};
class BraketMsg : public Msg
{
public:
	BraketMsg(string msg) :Msg(msg)
	{
	}
	string GetMsg()override
	{
		return "[" + ::Msg::GetMsg() + "]";
	}
};
class Printer
{
public:
	void Print(Msg* msg)
	{
		cout << msg->GetMsg() << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	BraketMsg m("Привет!");
	Printer P;
	P.Print(&m);
	return 0;
}