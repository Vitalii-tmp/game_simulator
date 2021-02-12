#pragma once
#include<iostream>
#include<vector>
#include "Players.h"
class PlayerManager
{
	std::vector<Players> player_list;//створюЇмо список гравц≥в в вектор≥
public:

	void CreatePlayer(int Id, std::string Name)       //створити гравц€;
	{
		Players player(Id, Name);

		player_list.push_back(player);//записуЇмо гравц€ в к≥нець вектору
	}

	Players GetPlayerByName(std::string player_name)	  //повернути гравц€ по ≥мен≥
	{//€кщо ≥м'€ Ї в списку то повертамо гравц€
		for (Players element : player_list) {
			if (element.GetName() == player_name) {
				return element;
			}

		}

	}

	Players GetPlayerById(int player_id) //повернути гравц€ по ≥д
	{//€кщо id Ї в списку то повертамо гравц€

		for (Players element : player_list) {
			if (element.GetId() == player_id) {
				return element;
			}

		}

	}

	void DeletePlayer(std::string name_player_del) // видалити гравц€
	{//€кщо в вектор≥ Ї дане ≥м'€ то видал€Їмо гравц€ на цьому м≥сц≥


		int kounter = 0;//л≥чильник
		for (Players element : player_list) {
			++kounter;
			if (element.GetName() == name_player_del) {

				player_list.erase(player_list.begin() + kounter);

			}
			else {
				std::cout << "ERROR - Player not found !\n";

			}
		}
	}


	void ShowPlayerInfo(Players player) // виводить ≥нф про гравц€
	{//€кщо дане ≥м'€ ≥снуЇ то виводить ≥нформац≥ю про цього гравц€

		std::cout << " --PLAYER-- \n";
		std::cout << "   Player id: " << player.GetId() << std::endl;
		std::cout << "   Player name: " << player.GetName() << std::endl;
		std::cout << "   Player Rank: " << player.GetRank() << std::endl ;





	}

	auto GetPlayerList() {    //геттер 
		return player_list;
	}
};