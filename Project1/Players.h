#pragma once
#include<iostream>
class Players
{
private:
	std::string Name;
	int Rank,Id;               //Id, Name, Rank гравця
public:
	Players();
	Players(int Id, std::string Name)
	{
		this->Name = Name;
		this->Id = Id;
		this->Rank = 0;
	}
	
	std::string GetName() {    //геттер для виводу name
		return Name;
	}

	int GetId() {     //геттер для виводу id
		return Id;
	}

	int GetRank() {     //геттер для виводу Rank
		return Rank;
	}

	std::string SetName(std::string Name) {    //cеттер для вводу name
		this->Name = Name;
	}

	int SetId(int Id) {     //сеттер для вводу id
		return Id;
	}

	
};
