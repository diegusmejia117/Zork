#pragma once
#include "NotHollowItem.h"
#include "HollowItem.h"

class Inventory
{

public:
	Inventory();
	~Inventory();
	Inventory(const Inventory& obj);
	inline int size()const { return this->numItems; };
	Item& operator[](const int index);
	void addItem(const Item& item);
	void removeItem(int index);
	inline void debugPrint() const{


		for (size_t i = 0; i < this->numItems; i++) {

			std::cout << this->itemArr[i]->debugPrint() << std::endl;

		}

	}
	


private:
	int cap;
	int numItems;
	Item **itemArr;
	//void expand();
	void initialize(const int from = 0);
	


};

