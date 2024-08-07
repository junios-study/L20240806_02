#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include "vector"

using namespace std;


//Compile 할때 코드 생성
template<typename T>
class Data
{
public:
	T Value;
};


//overloading
template<typename T>
T Add(T A, T B)
{
	return A + B;
}

//char Add(char A, char B)
//{
//	return A + B;
//}
//
//float Add(float A, float B)
//{
//	return A + B;
//}
//
//int Add(int A, int B)
//{
//	return A + B;
//}


int main()
{
	//cout << Add<int>(1, 2) << endl;
	//cout << Add<float>(1.1f, 2.3f) << endl;
	//cout << Add<char>('A', 'B') << endl;
	//cout << Add<double>(66.6666, 3.333333) << endl;

	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;

	vector<AActor*> Actors;

	srand((unsigned int)time(nullptr));

	int GoblinCount = rand() % 6;
	int SlimeCount = rand() % 6;
	int BoarCount = rand() % 6;
	int TotalMonsterCount = rand() % 10;

	//AGoblin* Goblins[6];
	//ASlime* Slimes[6];
	//ABoar* Boars[6];

	//APlayer* MyPlayer = new APlayer();
	Actors.push_back(new APlayer());

	for (int i = 0; i < TotalMonsterCount; ++i)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Actors.push_back(new AGoblin());
		}
		else if (Type == 1)
		{
			Actors.push_back(new ASlime());
		}
		else
		{
			Actors.push_back(new ABoar());
		}
	}


	//for (int i = 0; i < GoblinCount; ++i)
	//{
	//	//Goblins.push_back(new AGoblin);
	//	Actors.push_back(new AGoblin());

	//}

	//for (int i = 0; i < SlimeCount; ++i)
	//{
	//	//Slimes.push_back(new ASlime);
	//	Actors.push_back(new ASlime);
	//}

	//for (int i = 0; i < BoarCount; ++i)
	//{
	//	//Boars.push_back(new ABoar);
	//	Actors.push_back(new ABoar);
	//}

	for (int i = 0; i < Actors.size(); ++i)
	{
		APlayer* Player = dynamic_cast<APlayer*>(Actors[i]);
		if (Player)
		{
			Player->Attack();
		}
		Actors[i]->Move();
	}

	//MyPlayer->Move();

	//for (int i = 0; i < GoblinCount; ++i)
	//{
	//	Goblins[i]->Move();
	//}

	//for (int i = 0; i < SlimeCount; ++i)
	//{
	//	Slimes[i]->Move();
	//}

	//for (int i = 0; i < BoarCount; ++i)
	//{
	//	Boars[i]->Move();
	//}


	for (int i = 0; i < Actors.size(); ++i)
	{
		delete Actors[i];
	}

	Actors.clear();

	//delete MyPlayer;
	//MyPlayer = nullptr;

	//for (int i = 0; i < Goblins.size(); ++i)
	//{
	//	delete Goblins[i];
	//}

	//for (int i = 0; i < Slimes.size(); ++i)
	//{
	//	delete Slimes[i];
	//}

	//for (int i = 0; i < Boars.size(); ++i)
	//{
	//	delete Boars[i];
	//}


	//Goblins.clear();
	//Slimes.clear();
	//Boars.clear();


	//추가할꺼
	//추가할꺼2

	cout << "이건 집에서 한거" << endl;

	cout << "이건 학원에서 한거" << endl;


	return 0;
}