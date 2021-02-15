#pragma once
#include<iostream>
class Hero
{
private:
	 int Id, HP, Damage;  //Id, Name, HP, Damage �����
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

	std::string GetName() {    //������ ��� ������ name
		return Name;
	}

	int GetId() {     //������ ��� ������ id
		return Id;
	}

	int GetHP() {     //������ ��� ������ HP
		return HP;
	}
	int GetDamage() {     //������ ��� ������ Damage
		return Damage;
	}


	std::string SetName(std::string Name) {    //c����� ��� ����� name
		this->Name = Name;
	}

	int SetId(int Id) {     //������ ��� ����� id
		return Id;
	}

	int SetHP(int HP) {     //������ ��� ����� hp
		return HP;
	}

	int SetDamage(int Damage) {     //������ ��� ����� Damage
		return Damage;
	}


};


