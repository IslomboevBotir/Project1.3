#include <iostream>
#include <string>
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
int Apple::count = 0;
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

int main()
{
	setlocale(LC_ALL, "ru");

	const int LENGTH = 5;
	//Pixel p(11, 112, 32);
	Pixel* arr = new Pixel[LENGTH];
	arr[0] = Pixel(11, 151, 44);
	cout << arr[0].GetInfo();
	delete[]arr;
	
	return 0;
}