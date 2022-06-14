#pragma once


#include"Inventory.h"
#include"Enemy.h"


class Player
{
public:
	Player();
	int ActualPosition;
	//Functions
	void initialize(const std::string name);
	void PrintStats() const;
	void levelUp();
	std::string getAsString()const;

	//Accessors
	inline const double& getX() const { return this->xPOS; }
	inline const double& getY() const { return this->yPOS; }
	inline const int& getactualPosition() const { return this->ActualPosition; }

	inline const std::string& getName() const { return this->name; }

	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMAX; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getDamageMin() const { return this->damageMIN; }
	inline const int& getDamageMax() const { return this->damageMAX; }
	inline const int& getDefence() const { return this->defence; }


	//Modifiers

private:

	double xPOS;
	double yPOS;
	

	std::string name;
	int level;
	int exp;
	int expNext;

	int strength;
	int vitality;


	int hp;
	int hpMAX;
	int stamina;
	int damageMIN;
	int damageMAX;
	int defence;

	int statPoints;
	


};

