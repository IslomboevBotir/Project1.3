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
	}
private:
	int weight;
	string color;
	
};
int Apple::count = 0;
int main()
{
	setlocale(LC_ALL, "ru");

	Apple apple(150, "Red");
	Apple apple2(100, "Green"); 
	//Apple apple3(300, "Yellow");
	//cout << apple.count << endl;
	//cout << apple2.count << endl;
	//cout << apple3.count << endl;
	cout << Apple::count << endl;
	return 0;
}