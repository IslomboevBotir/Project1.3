#include <iostream>
#include <string>

using namespace std;

/*
* Абстрактные классы
* чисто виртуальные функции
* virtual
* override
*/

class Weapon
{
public:
	virtual void Shoot() = 0;
	void Foo()
	{
		cout << "FOO()" << endl;
	}
};
class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "Bang!" << endl;
	}
};
class SubmachineGun : public Gun
{
	void Shoot() override
	{
		cout << "Bang! Bang! Bang!" << endl;
	}
};
class Bazooka : public Weapon
{
public:
	void Shoot() override
	{
		cout << "Ena Skay" << endl;
	}
};
class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "Vjuh!" << endl;
	}
};
class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Gun gun;
	SubmachineGun machine;
	Bazooka bazooka;
	Player player;
	Knife knife;
	player.Shoot(&knife);
	return 0;
}
