#include <iostream>
#include <string>
using namespace std;
/*
* ������� ������ ������������ ��� ������������
*/
class A
{
public:
	A()
	{
		cout << "�������� ����������� ������ �" << endl;
	}
	~A()
	{
		cout << "�������� ���������� ������ �" << endl;
	}
};
class B : public A
{
public:
	B()
	{
		cout << "�������� ����������� ������ B" << endl;
	}
	~B()
	{
		cout << "�������� ���������� ������ B" << endl;
	}
};
class C : public B
{
public:
	C()
	{
		cout << "�������� ����������� ������ C" << endl;
	}
	~C()
	{
		cout << "�������� ���������� ������ C" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	B b;
	return 0;
}