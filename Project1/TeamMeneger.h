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
{//списки 2х команд
	std::vector<std::pair < Players, Hero >> team_A;
	std::vector<std::pair < Players, Hero >> team_B;

public:
	auto GenerateNewTeam(PlayerManager pl, HeroManager hr) //створити team;
	{
		auto players_list = pl.GetPlayerList(); //список гравців
		auto heroes_list = hr.GetHeroList(); //список героїв

		std::vector<std::pair < Players, Hero >> tmp; //списоктимчасових гравців з героями
		std::pair < Players, Hero > memb;
		for (int i = 0; i < 10; ++i) {
			int kounter_pl = rand() % players_list.size();//вибираєм рандомний індекс гравця
			int kounter_hr = rand() % heroes_list.size();//вибираєм рандомний індекс героя

			//заповнюємо тимчасовий список гравців з героями
			memb.second = heroes_list[kounter_hr];
			memb.first = players_list[kounter_pl];
			tmp.push_back(memb);

			//видаляємо вже вибраних персонажа і героя
			players_list.erase(players_list.begin() + kounter_pl);
			heroes_list.erase(heroes_list.begin() + kounter_hr);
		}



		for (int i = 0; i < 10; ++i) {
			int kounter_member = rand() % tmp.size();//вибираєм рандомний індекс member з тимчасово списку гравців з героями
			if (i < 5) {
				team_A.push_back(tmp[kounter_member]);
			}
			if (i >= 5) {
				team_B.push_back(tmp[kounter_member]);
			}


			//видаляємо вже вибраних персонажа і героя з тимчасового списку
			tmp.erase(tmp.begin() + kounter_member);



		}


		Team first("team_A", team_A);
		Team second("team_B", team_B);
		std::vector <Team> teams;
		teams.push_back(first);
		teams.push_back(second);

		return teams ;

	}

	void ShowTeamsInfo(Team team) {
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

	int hp_of_team(Team team) {
		std::vector<std::pair < Players, Hero >> tmp;
		tmp = team.GetTeamList();
		int Team_hp=0;
		for (int i = 0; i < 5; i++) {
			
			Team_hp+= tmp[i].second.GetHP();
			
		}
		return Team_hp;
	}

	int damage_of_team(Team team) {
	
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
//	std::pair < Players, Hero > AddTeamMember(Players player, Hero hero) {    //метод додавання гравців
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




