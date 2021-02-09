#include<iostream>
#include<conio.h>

class Player {
private:
	std::string Id, Name, Rank; //Id, Name, Rank гравця
public:
};

class PlayerManager {
	void CreatePlayer(std::string args)       //створити гравця
	{

	}
	void GetPlayerByName(std::string args)	  //показати гравця по імені
	{

	}
	void GetPlayerById(std::string args) //показати гравця по ід
	{

	}
	void DeletePlayer(std::string args) // видалити гравця
	{

	}
	void ShowPlayerInfo(std::string args) // інф про гравця
	{

	}
};

class Hero {
private:
	std::string Id, Name, HP, Damage;  //Id, Name, HP, Damage героя
public:
};

class HeroManager {
	void CreateHero(std::string args)     //створити героя
	{

	}
	void GetHeroByName(std::string args)  //показати героя по імені
	{

	}
	void GetHeroById(std::string args)   //показати героя по ід
	{

	}
	void DeleteHero(std::string args)    //видалити героя
	{

	}
	void ShowHeroInfo(std::string args)  //інф про героя
	{

	}
};

class Team {
	std::string Name;
		
};

class TeamManager {
	void GenerateNewTeam(std::string args)     //створити команду
	{

	}
	void GetTeamInfo(std::string args)        //отримати інформацію про команду 
	{

	}
};

class Session {
	int StartTime, TeamOne, TeamTwo, Winner;      //час гри, рахунок кожної команди
	void CalculateWinner(std::string args)        //рахує переможця
	{

	}
};

class GameManager {
	
	void PerformGameSession()                //створює ігрову сесію
	{

	};
};

int main() {





	_getch;
	return 0;
}