#include <iostream>
#include <string>

using namespace std;

/*
* Полиморфизм
* Виртуальные функции
* virtual
* override
*/
class Gun
{
public:
	virtual void Shoot()
	{
		cout << "Bang!" << endl;
	}
};
class SubmachineGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "Bang ! Bang ! Bang!" << endl;
	}
};
class Bazooka : public Gun
{
public:
	void Shoot() override
	{
		cout<< "BANDBUM" << endl;
	}
};
class Player
{
public:
	void Shoot(Gun *gun)
	{
		gun->Shoot();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Gun gun;
	Bazooka bazooka;
	SubmachineGun machinegun;
	Player player;
	player.Shoot(&bazooka);
	return 0;
}