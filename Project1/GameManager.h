#pragma once
#include <iostream>
#include <list>
#include "Session.h"
#include "Session.h"
#include <ctime>
class GameManager
{
	std::list<Session> sessions_list;

public:
	void PerformGameSession(PlayerManager& pl_mn, HeroManager hero_mn)                //створює ігрову сесію
	{
		//Team Winner, Team first_team, Team second_team, int StartTime

		auto players_list = pl_mn.GetPlayerList(); //список гравців
		auto heroes_list = hero_mn.GetHeroList(); //список героїв

		
		TeamManager team_meneger;

		Team team1 = team_meneger.GenerateNewTeam(players_list, heroes_list); //генеруємо команду
		Team team2 = team_meneger.GenerateNewTeam(players_list, heroes_list); //генеруємо команду
		std::cout << "------------------Before-Game------------------\n\n\n\n";
		std::cout << "------------------Team 1-----------------\n\n\n\n";

		team_meneger.ShowTeamsInfo(team1);

		std::cout << "------------------Team 2------------------\n\n\n\n";

		team_meneger.ShowTeamsInfo(team2);
		
		
		Team Winner;
		Session one/*(Team Winner, Team first_team, Team second_team, int StartTime)*/;
		
		
		
		
		
		int tmp=one.CalculateWinner(team1, team2);
		if (tmp == 1) {
			Winner = team1;
			pl_mn.AddRank(team1);
			pl_mn.MinusRank(team2);
			std::cout << "Winner!!!---------------> Team 1\n";
	}
		if (tmp == 2) {
			Winner = team2;
			pl_mn.AddRank(team2);
			pl_mn.MinusRank(team1);
			std::cout << "Winner!!!---------------> Team 2\n";
		}
		
		
		
		int start = clock();
		Session session(Winner, team1, team2, start);
		sessions_list.push_back(session);

	}
};

