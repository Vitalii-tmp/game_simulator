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



class TeamManager
{
public:

	auto GenerateNewTeam(std::vector<Players>& players_list, std::vector<Hero>&  heroes_list) //створити team;
	{
	

		std::vector<std::pair < Players, Hero >> team; //списоктимчасових гравц≥в з геро€ми
		
		for (int i = 0; i < 5; ++i) {
			
			std::pair < Players, Hero > memb;
			int kounter_pl = rand() % players_list.size();//вибираЇм рандомний ≥ндекс гравц€
			int kounter_hr = rand() % heroes_list.size();//вибираЇм рандомний ≥ндекс геро€

			//заповнюЇмо  список гравц≥в з геро€ми
			memb.second = heroes_list[kounter_hr];
			memb.first = players_list[kounter_pl];
			team.push_back(memb);

			//видал€Їмо вже вибраних персонажа ≥ геро€
			players_list.erase(players_list.begin() + kounter_pl);
			heroes_list.erase(heroes_list.begin() + kounter_hr);
		}

		


		Team first("team_a" , team);
		
		return first; 
	

	}

	void ShowTeamsInfo(Team& team) {
		PlayerManager tmp;
		HeroManager tempr;
		std::vector<std::pair < Players, Hero >> aaa;
		aaa = team.GetTeamList();
		for (int i = 0; i < 5; i++) {
		
			Players player = aaa[i].first;
			Hero hero = aaa[i].second;
			tmp.ShowPlayerInfo(player);
			tempr.ShowHeroInfo(hero);
		}
	}

	int hp_of_team(Team& team) {
		std::vector<std::pair < Players, Hero >> tmp;
		tmp = team.GetTeamList();
		int Team_hp=0;
		for (int i = 0; i < 5; i++) {
			
			Team_hp+= tmp[i].second.GetHP();
			
		}
		return Team_hp;
	}

	int damage_of_team(Team& team) {
	
		std::vector<std::pair < Players, Hero >> tmp;
		tmp = team.GetTeamList();
		int Team_damage = 0;
		for (int i = 0; i < 5; i++) {

			Team_damage += tmp[i].second.GetHP();

		}
		return Team_damage;
	}

	

};

//public:
//
//	std::pair < Players, Hero > AddTeamMember(Players player, Hero hero) {    //метод додаванн€ гравц≥в
//		std::pair<Players, Hero > members;
//		members.first = player;
//		members.second = hero;
//		return members;
//	}
//
//	auto CreateTeams(std::string team_name, std::vector<std::pair<Players, Hero>> team_list)
//	{
//		Team team(team_name, team_list);
//		return team;
//	}
//
//	void Generate_teams(Team team_a, Team team_b) {
//		TeamManager tmp;
//		PlayerManager pl_mn;
//		HeroManager hr_mn;
//		for (int i = 0; i < 5; i++) {
//			Players tmp_plr;
//			pl_mn.CreatePlayer(i, "player" + i);
//			tmp_plr = pl_mn.GetPlayerByName("player" + i);
//
//			//int Id, int HP, int Damage, std::string Name
//			Hero tmp_hero;
//			hr_mn.CreateHero(10 + i, rand() % 100 + i, rand() % 100 + i, "hero" + i);
//			tmp_hero = hr_mn.GetHeroByName("hero + i");
//
//			team_a.add_meember(tmp.AddTeamMember(tmp_plr, tmp_hero));
//		}
//		
//		for (int i = 5; i < 10; i++) {
//			Players tmp_plr;
//			pl_mn.CreatePlayer(i, "player" + i);
//			tmp_plr = pl_mn.GetPlayerByName("player" + i);
//
//			//int Id, int HP, int Damage, std::string Name
//			Hero tmp_hero;
//			hr_mn.CreateHero(10 + i, rand() % 100 + i, rand() % 100 + i, "hero" + i);
//			tmp_hero = hr_mn.GetHeroByName("hero + i");
//
//			team_b.add_meember(tmp.AddTeamMember(tmp_plr, tmp_hero));
//		}
//
//	}
//




