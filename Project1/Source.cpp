#include<iostream>
#include<conio.h>
#include "Players.h"
#include "PlayerManager.h"
#include "Hero.h"
#include "HeroManager.h"
//
//class Player {
//private:
//	std::string Id, Name, Rank;
//public:
//};
//
//class PlayerManager {
//	void CreatePlayer(std::string args)
//	{
//
//	}
//	void GetPlayerByName(std::string args)
//	{
//
//	}
//	void GetPlayerById(std::string args)
//	{
//
//	}
//	void DeletePlayer(std::string args) 
//	{
//
//	}
//	void ShowPlayerInfo(std::string args)
//	{
//
//	}
//};
//
//class Hero {
//private:
//	std::string Id, Name, HP, Damage;
//public:
//};
//
//class HeroManager {
//	void CreateHero(std::string args)
//	{
//
//	}
//	void GetHeroByName(std::string args)
//	{
//
//	}
//	void GetHeroById(std::string args)
//	{
//
//	}
//	void DeleteHero(std::string args)
//	{
//
//	}
//	void ShowHeroInfo(std::string args)
//	{
//
//	}
//};
//
//class Team {
//	std::string Name;
//		
//};
//
//class TeamManager {
//	void GenerateNewTeam(std::string args)
//	{
//
//	}
//	void GetTeamInfo(std::string args)
//	{
//
//	}
//};
//
//class Session {
//	int StartTime, TeamOne, TeamTwo, Winner;
//	void CalculateWinner(std::string args) 
//	{
//
//	}
//};
//
//class GameManager {
//	
//	void PerformGameSession() 
//	{
//
//	};
//};

int main() {
	
	PlayerManager tmp;
	std::string name;
	std::cin >> name;
	tmp.CreatePlayer(123, "Vova");
	tmp.ShowPlayerInfo(tmp.GetPlayerByName(name));
	int id;
	std::cout << "dkluufsuugfuisgduygdf\n";
	std::cin >> id;
	tmp.ShowPlayerInfo(tmp.GetPlayerById(id));
	HeroManager first;
	first.CreateHero(12345,100,12,"vovochka");
	first.ShowHeroInfo(first.GetHeroByName("vovochka"));
	//int Id, int HP, int Damage, std::string Name

	_getch;
	return 0;
}