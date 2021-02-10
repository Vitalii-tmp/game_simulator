#pragma once
#include<iostream>
class Players
{
private:
	std::string Name;
	int Rank,Id;               //Id, Name, Rank ������
public:
	Players();
	Players(int Id, std::string Name)
	{
		this->Name = Name;
		this->Id = Id;
		this->Rank = 0;
	}
	
	std::string GetName() {    //������ ��� ������ name
		return Name;
	}

	int GetId() {     //������ ��� ������ id
		return Id;
	}

	int GetRank() {     //������ ��� ������ Rank
		return Rank;
	}

	std::string SetName(std::string Name) {    //c����� ��� ����� name
		this->Name = Name;
	}

	int SetId(int Id) {     //������ ��� ����� id
		return Id;
	}

	
};
