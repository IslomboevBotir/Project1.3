#include <iostream>
#include <string>
#include <cstring>
/*
* Агрегация и композиция
*/

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
	static void ChangeColor(Apple& apple, string color)
	{
		apple.color = color;
	}
private:
	int weight;
	string color;
	int id;
	static int count;

};
class Pixel
{
public:
	Pixel()
	{
		r = g = b = 0;

	}
	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	string GetInfo()
	{
		return "Pixel: r= " + to_string(r) + " g= " + to_string(g) + " b= " + to_string(b);
	}
private:
	int r;
	int g;
	int b;
};
class Cap {
public:
	void GetColor()
	{
		return color;
	}
private:
	 string color ="red";
};
class Model
{
public:
	void InspectModel()
	{
		cout << "Кепка" << cap.GetColor() << "Цвета " << endl;
	}

private:
	Cap cap;
};
class Human
{
public:

	void Think()
	{
		brain.Think();
	}
	void InspectTheCap()
	{
		cout << "Моя кепка " << cap.GetColor();
	}
private:
	class Brain
	{
	public:
		void Think()
		{
			cout << "Я думаю!" << endl;
		}

	};
	Brain brain;
	Cap cap;
};
int main()
{
	setlocale(LC_ALL, "ru");
	Human human;
	human.Think();
	human.InspectTheCap();

	return 0;
}