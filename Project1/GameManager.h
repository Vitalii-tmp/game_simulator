#pragma once
#include <iostream>
#include <list>
#include "Session.h"
#include "Session.h"
class GameManager
{
	std::list<Session> sessions_list;
	
public:
	
	void PerformGameSession(PlayerManager pl_mn, HeroManager hero_mn)                //створює ігрову сесію
	{
		//Team Winner, Team first_team, Team second_team, int StartTime
		
		
		
		
		for (int i = 0; i < 10; i++) {          //створюємо гравців
			pl_mn.CreatePlayer(i, "player" + std::to_string(i));
		}
		//int Id, int HP, int Damage, std::string Name)
		                   //створюємо героїв
		for (int i = 0; i < 10; i++) {
			hero_mn.CreateHero(i + 10, rand() % 150 + i, rand() % 100 + i, "Hero" + std::to_string(i));
		}
		TeamManager team_meneger;
		std::vector <Team> t = team_meneger.GenerateNewTeam(pl_mn, hero_mn); //генеруємо команд
		
		std::cout << "------------------Before-Game------------------\n\n\n\n";
		std::cout << "------------------Team 1-----------------\n\n\n\n";
		
		team_meneger.ShowTeamsInfo(t[0]);

		std::cout << "------------------Team 2------------------\n\n\n\n";

		team_meneger.ShowTeamsInfo(t[1]);

		std::cout << "------------------After-Game------------------\n\n\n\n";
		
		std::cout << "------------------Team 1-----------------\n\n\n\n";

		team_meneger.ShowTeamsInfo(t[0]);

		std::cout << "------------------Team 2------------------\n\n\n\n";

		team_meneger.ShowTeamsInfo(t[1]);

		std::cout << "------------------Winner------------------\n\n\n\n";
		Session one/*(Team Winner, Team first_team, Team second_team, int StartTime)*/;
		team_meneger.ShowTeamsInfo(one.CalculateWinner(t[0], t[1]));
		
		Session sesion(t[0], t[1]); 
		sessions_list.push_back(sesion);
	}
};

