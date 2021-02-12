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
//	std::vector<player_with_hero> team_A;
//	std::vector<player_with_hero> team_B;
//
//public:
//	auto GenerateNewTeam(PlayerManager pl, HeroManager hr) //створити team;
//	{
//		auto players_list = pl.GetPlayerList(); //список гравців
//		auto heroes_list = hr.GetHeroList(); //список героїв
//
//		std::vector<player_with_hero> tmp; //списоктимчасових гравців з героями
//		player_with_hero memb; //структура
//		for (int i = 0; i < 10; ++i) {
//			int kounter_pl = rand() % players_list.size();//вибираєм рандомний індекс гравця
//			int kounter_hr = rand() % heroes_list.size();//вибираєм рандомний індекс героя
//
//			//заповнюємо тимчасовий список гравців з героями
//			memb.hero = heroes_list[kounter_hr];
//			memb.player = players_list[kounter_pl];
//			tmp.push_back(memb);
//
//			//видаляємо вже вибраних персонажа і героя
//			players_list.erase(players_list.begin() + kounter_pl);
//			heroes_list.erase(heroes_list.begin() + kounter_hr);
//		}
//
//
//
//		for (int i = 0; i < 10; ++i) {
//			int kounter_member = rand() % tmp.size();//вибираєм рандомний індекс member з тимчасово списку гравців з героями
//			if (i < 5) {
//				team_A.push_back(tmp[kounter_member]);
//			}
//			if (i >= 5) {
//				team_B.push_back(tmp[kounter_member]);
//			}
//
//
//			//видаляємо вже вибраних персонажа і героя з тимчасового списку
//			tmp.erase(tmp.begin() + kounter_member);
//
//			
//
//		}
//
//		
//
//
//
//	}
//	
//	void ShowTeamInfo(){
//		for (int i = 0; i < 5; ++i) {
//			
//			
//			std::string pl_name = team_A[i].player.GetName();
//			PlayerManager tmp;
//			tmp.ShowPlayerInfo(tmp.GetPlayerByName(pl_name));
//			
//			std::string hero_name = team_A[i].player.GetName();
//			HeroManager temp;
//			temp.ShowHeroInfo(temp.GetHeroByName(hero_name));
//			
//			/*std::string player_name = team_A[i].player.GetName();
//			PlayerManager tmp;
//			tmp.ShowPlayerInfo(tmp.GetPlayerByName(player_name));
//
//			std::string hero_name = team_A[i].player.GetName();
//			HeroManager tempr;
//			tempr.ShowHeroInfo(tempr.GetHeroByName(hero_name));*/
//			}
//	};
		
public:

	std::pair < Players, Hero > AddTeamMember(Players player, Hero hero) {    //метод додавання гравців
		std::pair<Players, Hero > members;
		members.first = player;
		members.second = hero;
		return members;
	}

	auto CreateTeams(std::string team_name, std::vector<std::pair<Players, Hero>> team_list)
	{
		Team team(team_name, team_list);
		return team;
	}

	void Generate_teams(Team team_a, Team team_b) {
		TeamManager tmp;
		PlayerManager pl_mn;
		HeroManager hr_mn;
		for (int i = 0; i < 5; i++) {
			Players tmp_plr;
			pl_mn.CreatePlayer(i, "player" + i);
			tmp_plr = pl_mn.GetPlayerByName("player" + i);

			//int Id, int HP, int Damage, std::string Name
			Hero tmp_hero;
			hr_mn.CreateHero(10 + i, rand() % 100 + i, rand() % 100 + i, "hero" + i);
			tmp_hero = hr_mn.GetHeroByName("hero + i");

			team_a.add_meember(tmp.AddTeamMember(tmp_plr, tmp_hero));
		}
		
		for (int i = 5; i < 10; i++) {
			Players tmp_plr;
			pl_mn.CreatePlayer(i, "player" + i);
			tmp_plr = pl_mn.GetPlayerByName("player" + i);

			//int Id, int HP, int Damage, std::string Name
			Hero tmp_hero;
			hr_mn.CreateHero(10 + i, rand() % 100 + i, rand() % 100 + i, "hero" + i);
			tmp_hero = hr_mn.GetHeroByName("hero + i");

			team_b.add_meember(tmp.AddTeamMember(tmp_plr, tmp_hero));
		}

	}


	
};

