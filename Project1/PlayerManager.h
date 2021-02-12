#pragma once
#include<iostream>
#include<vector>
#include "Players.h"
class PlayerManager
{
	std::vector<Players> player_list;//��������� ������ ������� � ������
public:

	void CreatePlayer(int Id, std::string Name)       //�������� ������;
	{
		Players player(Id, Name);

		player_list.push_back(player);//�������� ������ � ����� �������
	}

	Players GetPlayerByName(std::string player_name)	  //��������� ������ �� ����
	{//���� ��'� � � ������ �� ��������� ������
		for (Players element : player_list) {
			if (element.GetName() == player_name) {
				return element;
			}

		}

	}

	Players GetPlayerById(int player_id) //��������� ������ �� ��
	{//���� id � � ������ �� ��������� ������

		for (Players element : player_list) {
			if (element.GetId() == player_id) {
				return element;
			}

		}

	}

	void DeletePlayer(std::string name_player_del) // �������� ������
	{//���� � ������ � ���� ��'� �� ��������� ������ �� ����� ����


		int kounter = 0;//��������
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


	void ShowPlayerInfo(Players player) // �������� ��� ��� ������
	{//���� ���� ��'� ���� �� �������� ���������� ��� ����� ������

		std::cout << " --PLAYER-- \n";
		std::cout << "   Player id: " << player.GetId() << std::endl;
		std::cout << "   Player name: " << player.GetName() << std::endl;
		std::cout << "   Player Rank: " << player.GetRank() << std::endl ;





	}

	auto GetPlayerList() {    //������ 
		return player_list;
	}
};