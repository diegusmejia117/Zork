#include "HollowItem.h"

HollowItem::HollowItem(std::string item_Name, bool hollowness)
	: Item(item_Name, hollowness) {

	this->item_Name = item_Name;
	this->hollow = hollowness;
	

}

HollowItem::~HollowItem() {




}



HollowItem* HollowItem::clone()const {

	return new HollowItem(*this);
}

std::string HollowItem::toString() {

	std::string str = (this->item_Name) + " " + std::to_string(this->hollow);

	return str;


}
