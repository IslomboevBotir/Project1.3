#include <iostream>
#include <string>
using namespace std;
/*
*  ������������ �������.
*/
class Human
{
private:
	string name;
public:
	string GetName()
	{
		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
};
class Student : public Human
{
public:
	string group;
	void Learn()
	{
		cout << " � ����� !" << endl;
	}
};
class Professor : public Human
{
public:
	string subject;
};
class ExtramuralStudent : public Student
{
public:
	void Learn()
	{
		cout << "� ����� � ������������ ���� �������� �������� " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Student st;
	Professor pr;
	st.SetName("������");
	cout << st.GetName() << endl;
	ExtramuralStudent extraSt;
	extraSt.SetName("����������");
	cout << extraSt.GetName() << endl;
	return 0;
}