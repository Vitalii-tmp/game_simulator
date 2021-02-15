#pragma once
#include<iostream>
#include<vector>
#include <string>
#include "Players.h"
#include "Hero.h"
//struct player_with_hero {
//	Players player;
//	Hero hero;
//
//};


class Team
{
private:
	std::string Name;    
	std::vector<std::pair<Players, Hero>> team_list;

public:
	Team();
	Team(std::string Name, std::vector<std::pair<Players, Hero>> team_list)
	{
		this->Name = Name;
		this->team_list = team_list;
	}

	

	std::vector<std::pair<Players, Hero>> GetTeamList() {
		return team_list;
	}
	
	void fill_team(Players player, Hero hero) {
		std::make_pair(player, hero);
		team_list.push_back(std::make_pair(player, hero));
	}

	auto &GetThisTeam() {
		return this->team_list;
	}
	
};


