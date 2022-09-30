#include <iostream>

using namespace std;

class Apple
{
public:
	static int count;

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
		id = count;
	}
	int GetId()
	{
		return id;
	}
private:
	int weight;
	string color;
	int id;

};
int Apple::count = 0;
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(300, "Yellow");
	cout << apple.GetId() << endl;
	cout << apple2.GetId() << endl;
	cout << apple3.GetId() << endl;

	cout << Apple::count << endl;
	return 0;
}