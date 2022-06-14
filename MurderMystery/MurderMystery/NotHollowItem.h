#pragma once
#include "Item.h"
class NotHollowItem :
	public Item
{

	
	
	public:
		NotHollowItem(std::string item_Name = "NONE", bool hollowness = false, bool isArmor = false, bool isWeapon = false);
		virtual ~NotHollowItem();

		//Virtual

		virtual NotHollowItem* clone()const;
	
	//Functions
		std::string toString();

private:
	std::string item_Name;
	bool hollow;
	bool isArmor;
	bool isWeapon;
	
};

