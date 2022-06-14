#include "Enemy.h"
Enemy::Enemy(int level) {

	this->level = level;
	this->hpMax = 20;
	this->hp = hpMax;
	this->damageMin = 4;
	this->damageMax = 5;
	this->defence = 1;

}

Enemy::~Enemy() {



}

std::string Enemy::getAsString()const
{

	return "Hp:" + std::to_string(this->hp) +
		"/" + std::to_string(this->hpMax) + "\n" +
		"Damage:" + std::to_string(this->damageMin) + "-" +
		std::to_string(this->damageMax) + "\n" +
		"Defence:" + std::to_string(this->defence);


}