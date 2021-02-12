#include<iostream>
#include<conio.h>
#include "Players.h"
#include "PlayerManager.h"
#include "Hero.h"
#include "HeroManager.h"
#include "TeamMeneger.h"
#include <ctime>
#include "Session.h"
#include "GameManager.h"
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
	srand(time(NULL));
	GameManager game;
	HeroManager hero_mn;
	PlayerManager pl_mn;
	game.PerformGameSession(pl_mn, hero_mn);
	


	_getch;
	return 0;
}