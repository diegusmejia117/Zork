#include "Player.h"
Player::Player() {

	 this->ActualPosition = 0;
	 this->name = "";
	 this->level = 0;
	 this->exp = 0;
	 this->expNext = 0;

	 this->strength = 0;
	 this->vitality = 0;


	 this->hp = 0;
	 this->stamina = 0;
	 this->damageMIN = 0;
	 this->damageMAX = 0;
	 this->defence = 0;

	 this->statPoints = 0;
	 
}



void Player::initialize(std::string name) {

	this->ActualPosition = 0;
	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = expNext = static_cast<int>((50 / 3)*(pow(level,3)- 
		6 * pow(level ,2) + 17 * level - 12 + 100));

	this->strength = 1;
	this->vitality = 10;

	this->hpMAX = (this->vitality * 2) + (this->vitality/2);
	this->hp = hpMAX;
	
	this->damageMIN = this->strength;
	this->damageMAX = this->strength + 2;
	this->defence = this->vitality + 1;

	this->statPoints = 0;
}


 void Player::PrintStats() const {

	std::cout << "= Player Status =" << std::endl;
	std::cout << "Name:" << this->name << std::endl;
	std::cout << "Level:" << this->level << std::endl;
	std::cout << "Exp:" << this->exp << std::endl;
	std::cout << "Exp to next level:" << this->expNext << std::endl;
	
	std::cout << "Strength:" << this->strength << std::endl;
	std::cout << "Vitality:" << this->vitality << std::endl;

	std::cout << "HP:" << this->hp << "/" << this->hpMAX << std::endl;

	std::cout << "Damage:" << this->damageMIN << "-" << this->damageMAX << std::endl;
	


}

void Player::levelUp() {

	while (this->exp >= this->expNext) {

		this->exp -= this->expNext;
		this->level++;
		this->exp = 0;
		this->expNext = expNext = static_cast<int>((50 / 3) * (pow(level, 3) -
			6 * pow(level, 2) + 17 * level - 12) + 100);

		this->statPoints++;
		
	}

	

}

std::string Player::getAsString() const {

	return std::to_string(ActualPosition) + " " + name + " "
		+ std::to_string(level) + " "
		+ std::to_string(exp) + " "
		+ std::to_string(strength) + " "
		+ std::to_string(vitality) + " "
		+ std::to_string(hp) + " "
		+ std::to_string(stamina) + " "
		+ std::to_string(statPoints);
		



}