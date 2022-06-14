#include "Item.h"
Item::Item(std::string item_Name,bool item_hollowness, bool isArmor, bool isWeapon) {

	this->item_Name = item_Name;
	this->hollowness = item_hollowness;
	this->isArmor = isArmor;
	this->isWeapon = isWeapon;


}

Item::~Item() {

	


}

