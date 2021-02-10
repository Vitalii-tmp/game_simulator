#pragma once
#include<iostream>
#include<vector>
#include "Players.h"
class PlayerManager
{
	std::vector<Players> plrs_list; //��������� ������ ������� � ������
public:

	void CreatePlayer(int Id, std::string Name)       //�������� ������;
	{
		Players player(Id, Name);

		plrs_list.push_back(player);//�������� ������ � ����� �������
	}

	Players GetPlayerByName(std::string player_name)	  //��������� ������ �� ����
	{//���� ��'� � � ������ �� ��������� ������
		for (Players element : plrs_list) {
			if (element.GetName() == player_name) {
				return element;
			}
			else std::cout << "ERROR - Player not found !\n";
		}

	}

	Players GetPlayerById(int player_id) //��������� ������ �� ��
	{//���� id � � ������ �� ��������� ������
		
			for (Players element : plrs_list) {
				if (element.GetId() == player_id) {
					return element;
				}
				else std::cout << "ERROR - Player not found !\n";
			}
		
	}

	void DeletePlayer(std::string name_player_del) // �������� ������
	{//���� � ������ � ���� ��'� �� ��������� ������ �� ����� ����

		
			int kounter = 0;//��������
			for (Players element : plrs_list) {
				++kounter;
				if (element.GetName() == name_player_del) {

					plrs_list.erase(plrs_list.begin() + kounter);
					
				}
				else std::cout << "ERROR - Player not found !\n";
			
			}
		}
	
	
	void ShowPlayerInfo(Players player) // �������� ��� ��� ������
	{//���� ���� ��'� ���� �� �������� ���������� ��� ����� ������
		for (Players element : plrs_list) {
			
				std::cout <<" Player id: " << player.GetId()<<std::endl;
				std::cout << " Player name: " << player.GetName() << std::endl;
				std::cout << " Player Rank: " << player.GetRank() << std::endl;
			
			
		}

	}
};