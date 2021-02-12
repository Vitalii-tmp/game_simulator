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
	Team Winner;
public:
	
	/*void CreateTeams(std::string team_name, std::vector<std::pair<Players, Hero>> team_list)       
	{
		Team team(team_name, team_list);
		
	}*/
	void PerformSession() {
		TeamManager k;
		std::vector<std::pair<Players, Hero>> team_A_list;
		std::vector<std::pair<Players, Hero>> team_B_list;

		k.Generate_teams(k.CreateTeams("team a", team_A_list), k.CreateTeams("team a", team_B_list));
	}
	//void Generate_teams(Team team_a, Team team_b) {
	//	TeamManager tmp;
	//	PlayerManager pl_mn;
	//	HeroManager hr_mn;
	//	for (int i = 0; i < 5; i++) {
	//		Players tmp_plr;
	//		pl_mn.CreatePlayer(i, "player" + i);
	//		tmp_plr = pl_mn.GetPlayerByName("player" + i);
	//		
	//		//int Id, int HP, int Damage, std::string Name
	//		Hero tmp_hero;
	//		hr_mn.CreateHero(10 + i, rand() % 100 + i, rand() % 100 + i, "hero" + i);
	//		tmp_hero = hr_mn.GetHeroByName("hero + i");
	//		
	//		team_a.add_meember(tmp.AddTeamMember(tmp_plr, tmp_hero));
	//	}





	void CalculateWinner(std::string args)        //рахує переможця
	{

	}
};

