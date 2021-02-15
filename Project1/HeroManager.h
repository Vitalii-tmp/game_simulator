#pragma once
#include<iostream>
#include<vector>
#include"Hero.h"
class HeroManager
{
	std::vector<Hero> hero_list; //��������� ������ heroes � ������
public:

	void CreateHero(int Id, int HP, int Damage, std::string Name)       //�������� hero;
	{
		Hero hero(Id, HP, Damage, Name);

		hero_list.push_back(hero);//�������� hero � ����� �������
	}

	Hero GetHeroByName(std::string hero_name)	  //��������� hero �� ����
	{//���� ��'� � � ������ �� ��������� hero
		for (Hero element : hero_list) {
			if (element.GetName() == hero_name) {
				return element;
			}
			else std::cout << "ERROR - Hero not found !\n";
		}

	}

	Hero GetHeroById(int hero_id) //��������� hero �� ��
	{//���� id � � ������ �� ��������� hero

		for (Hero element : hero_list) {
			if (element.GetId() == hero_id) {
				return element;
			}
			else std::cout << "ERROR - Hero not found !\n";
		}

	}

	void DeleteHero(std::string name_hero_del) // �������� hero
	{//���� � ������ � ���� ��'� �� ��������� hero �� ����� ����


		int kounter = 0;//��������
		for (Hero element : hero_list) {
			++kounter;
			if (element.GetName() == name_hero_del) {

				hero_list.erase(hero_list.begin() + kounter);

			}
			else std::cout << "ERROR - Hero not found !\n";

		}
	}


	void ShowHeroInfo(Hero hero) // �������� ��� ��� hero
	{//���� ����� ����� ���� �� �������� ���������� ��� ����� hero
		
		std::cout << "--His hero--\n";
			std::cout << "Hero id: " << hero.GetId() << std::endl;
			std::cout << "Hero name: " << hero.GetName() << std::endl;
			std::cout << "Hero HP: " << hero.GetHP() << std::endl;
			std::cout << "Hero damage: " << hero.GetDamage() << std::endl << std::endl;
			


	}

	auto &GetHeroList() {
		return hero_list;
	}
};

