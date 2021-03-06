#pragma once
#include<stdlib.h>
#include<string>
class Enemy
{

	
	

public:

	//Functions
	Enemy(int level = 0);
	virtual ~Enemy();

	inline bool isAlive() { return this->hp > 0; }
	std::string getAsString()const;
	inline void takeDamage(int damage){ this->hp -= damage; };
	inline int getDamage()const { return rand() % this->damageMax - this->damageMin; }
	inline int getExp()const { return this->expGained; }

private:

	int level;
	int hp;
	int hpMax;
	int damageMin;
	int damageMax;
	int defence;
	int expGained = 100;
};

