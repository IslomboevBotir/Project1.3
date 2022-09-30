#include <iostream>

using namespace std;

class Apple
{
public:

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
	static int Getcount()
	{
		return count;
	}
	static void ChangeColor(Apple &apple, string color)
	{
		apple.color = color;
	}
private:
	int weight;
	string color;
	int id;
	static int count;

};
int Apple::count = 0;
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	/*Apple apple2(100, "Green");
	Apple apple3(300, "Yellow");*/
	//cout << apple.GetId() << endl;
	//cout << apple2.GetId() << endl;
	//cout << apple3.GetId() << endl;
	return 0;
}