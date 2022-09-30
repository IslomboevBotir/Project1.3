#include <iostream>
#include <string>
using namespace std;
/*
*  Наследование классов.
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
		cout << " Я учусь !" << endl;
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
		cout << "Я бываю в университете реже обычного студента " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Student st;
	Professor pr;
	st.SetName("Плутон");
	cout << st.GetName() << endl;
	ExtramuralStudent extraSt;
	extraSt.SetName("Аристотель");
	cout << extraSt.GetName() << endl;
	return 0;
}