#pragma once
#include<string>
#include<iostream>
#include<iomanip>
class Item
{

public: 
 Item(std::string item_Name = "NONE", bool hollowness = false, bool isArmor = false, bool isWeapon = false);
 virtual ~Item();
 inline std::string debugPrint() const { return this->item_Name; }
 virtual Item* clone() const = 0;
private:

	std::string item_Name;
	bool hollowness;
	bool isArmor;
	bool isWeapon;
	
	
	
	
	//Accessors
	inline const std::string& getName() const { return this->item_Name; }
	inline const bool& getHollowness() const { return this->hollowness; }


	//Modifiers 

};

