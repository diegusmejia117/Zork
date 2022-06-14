#include "NotHollowItem.h"
NotHollowItem::NotHollowItem(std::string item_Name, bool hollowness, bool isArmor, bool isWeapon)
	: Item(item_Name, hollowness, isArmor, isWeapon) {

	this->item_Name = item_Name;
	this->hollow = hollowness;
	this->isArmor = isArmor;
	this->isWeapon = isWeapon;

}

NotHollowItem::~NotHollowItem() {




}

	

NotHollowItem* NotHollowItem::clone()const {

	return new NotHollowItem(*this);
}

std::string NotHollowItem::toString() {

	std::string str = (this->item_Name) + " " + std::to_string(this->hollow)
		+ " " + std::to_string(this->isArmor) + " " + std::to_string(this->isWeapon);

	return str;


}
