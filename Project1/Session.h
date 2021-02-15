#pragma once
#include<iostream>
#include<vector>
#include <string>
#include "Players.h"
#include "Hero.h"
#include "Team.h"
#include "PlayerManager.h"
#include "Heromanager.h"
#include "PlayerManager.h"
#include "TeamMeneger.h"
class Session
{
	
	Team first_team;
	Team second_team;
	Team Winner;
	int StartTime;
	

public:
	Session();
	Session(Team Winner, Team first_team, Team second_team, int StartTime) {
		this->Winner = Winner;
		this->first_team = first_team;
		this->second_team = second_team;
		this->StartTime = StartTime;
	}

	auto CalculateWinner(Team& first_team, Team& second_team)        //рахує переможця
	{
		TeamManager team_mn;
		PlayerManager tmp;
	
		if (team_mn.hp_of_team(first_team) - team_mn.damage_of_team(second_team) > team_mn.hp_of_team(second_team) - team_mn.damage_of_team(first_team)) {
			Winner = first_team;
			return 1;
			
			
		}
		else {
			Winner = second_team;

			return 2;
			

			}

			
		
		

		

	}
};

//void ShowTeamsInfo(Team team) {
//	PlayerManager tmp;
//	HeroManager tempr;
//	std::vector<std::pair < Players, Hero >> aaa;
//	aaa = team.GetTeamList();
//	for (int i = 0; i < 5; i++) {
//
//		Players player = aaa[i].first;
//		Hero hero = aaa[i].second;
//		tmp.ShowPlayerInfo(player);
//		tempr.ShowHeroInfo(hero);
//	}
//}