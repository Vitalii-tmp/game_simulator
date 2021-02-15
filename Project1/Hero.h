#pragma once
#include<iostream>
class Hero
{
private:
	 int Id, HP, Damage;  //Id, Name, HP, Damage героя
	 std::string Name;
public:

	Hero(){}
	Hero(int Id, int HP, int Damage ,std::string Name)
	{
		this->Id = Id;
		this->HP = HP;
		this->Damage = Damage;
		this->Name = Name;
	}

	std::string GetName() {    //геттер для виводу name
		return Name;
	}

	int GetId() {     //геттер для виводу id
		return Id;
	}

	int GetHP() {     //геттер для виводу HP
		return HP;
	}
	int GetDamage() {     //геттер для виводу Damage
		return Damage;
	}


	std::string SetName(std::string Name) {    //cеттер для вводу name
		this->Name = Name;
	}

	int SetId(int Id) {     //сеттер для вводу id
		return Id;
	}

	int SetHP(int HP) {     //сеттер для вводу hp
		return HP;
	}

	int SetDamage(int Damage) {     //сеттер для вводу Damage
		return Damage;
	}


};


