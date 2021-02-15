#pragma once
#include<iostream>
#include<vector>
#include"Hero.h"
class HeroManager
{
	std::vector<Hero> hero_list; //створюємо список heroes в векторі
public:

	void CreateHero(int Id, int HP, int Damage, std::string Name)       //створити hero;
	{
		Hero hero(Id, HP, Damage, Name);

		hero_list.push_back(hero);//записуємо hero в кінець вектору
	}

	Hero GetHeroByName(std::string hero_name)	  //повернути hero по імені
	{//якщо ім'я є в списку то повертамо hero
		for (Hero element : hero_list) {
			if (element.GetName() == hero_name) {
				return element;
			}
			else std::cout << "ERROR - Hero not found !\n";
		}

	}

	Hero GetHeroById(int hero_id) //повернути hero по ід
	{//якщо id є в списку то повертамо hero

		for (Hero element : hero_list) {
			if (element.GetId() == hero_id) {
				return element;
			}
			else std::cout << "ERROR - Hero not found !\n";
		}

	}

	void DeleteHero(std::string name_hero_del) // видалити hero
	{//якщо в векторі є дане ім'я то видаляємо hero на цьому місці


		int kounter = 0;//лічильник
		for (Hero element : hero_list) {
			++kounter;
			if (element.GetName() == name_hero_del) {

				hero_list.erase(hero_list.begin() + kounter);

			}
			else std::cout << "ERROR - Hero not found !\n";

		}
	}


	void ShowHeroInfo(Hero hero) // виводить інф про hero
	{//якщо даний герой існує то виводить інформацію про цього hero
		
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

