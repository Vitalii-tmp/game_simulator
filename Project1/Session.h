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
	int StartTime;
	Team first_team;
	Team second_team;
	Team Winner;
	

public:
	Session();
	Session( Team first_team, Team second_team) {
		this->first_team = first_team;
		this->second_team = second_team;
		
	}

	auto CalculateWinner(Team first_team, Team second_team)        //рахує переможця
	{
		TeamManager team_mn;

		if (team_mn.hp_of_team(first_team) - team_mn.damage_of_team(second_team) > team_mn.hp_of_team(second_team) - team_mn.damage_of_team(first_team)) {
			Winner = first_team;

		}
		else {
			Winner = second_team;
		}

		return Winner;

	}
};

