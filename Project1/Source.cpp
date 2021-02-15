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
	
	for (int i = 0; i < 10; i++) {          //створюємо гравців
		pl_mn.CreatePlayer(i, "player" + std::to_string(i));
	}
	//int Id, int HP, int Damage, std::string Name)
					   //створюємо героїв
	for (int i = 0; i < 10; i++) {
		hero_mn.CreateHero(i + 10, rand() % 150 + i, rand() % 100 + i, "Hero" + std::to_string(i));
	}

	int session;
	std::cout << "Enter the number of sessions: ";
	std::cin >> session;
	for (int i = 0; i < session; i++) {
		std::cout << "_________________________Session _ " << i + 1 << " _________________________\n\n\n";
		game.PerformGameSession(pl_mn, hero_mn);
		std::cout << "------------------->Players after game:\n";
		pl_mn.ShowAllPlayersInfo();
	}

	return 0;
}