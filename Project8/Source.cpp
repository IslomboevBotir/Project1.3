#include <iostream>
#include <string>
using namespace std;
/*
* ������������� ������� ��� ������������
*/
class A
{
public:
	string msgOne = "��������� ����";
private:
	string msgTwo = "��������� ���";
protected:
	string msgThree = "��������� ���";
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