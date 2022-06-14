#pragma once
#include "Item.h"
class HollowItem :
	public Item
{



public:
	HollowItem(std::string item_Name = "NONE", bool hollowness = false);
	virtual ~HollowItem();

	//Virtual

	virtual HollowItem* clone()const;

	//Functions
	std::string toString();

private:
	std::string item_Name;
	bool hollow;
	

};
