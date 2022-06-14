#include "Inventory.h"

Inventory::Inventory() {

	this->cap = 3;
	this->numItems = 0;
	this->itemArr = new Item * [cap];
	this->initialize();


}

Inventory::~Inventory() {

	for (size_t i = 0; i < this->numItems; i++) {

		delete this->itemArr[i];

	}
	delete[] this->itemArr;

}


Inventory::Inventory(const Inventory &obj) 
{

	this->cap = obj.cap;
	this->numItems = obj.numItems;
	this->itemArr = new Item * [this->cap];

	for (size_t i = 0; i < this->numItems; i++) {

		this->itemArr[i] = obj.itemArr[i]->clone();

	}

	initialize(this->numItems);


}

Item& Inventory::operator[](const int index) {


	if (index < 0 || index >= this->numItems) {
		throw("BAD INDEX");
		
	}
	return *this->itemArr[index];



}





void Inventory::initialize(const int from) {

	for (size_t i = from; i < cap; i++) {

		itemArr[i] = nullptr;

	}


}




void Inventory::addItem(const Item &item) {

	if (this->numItems >= this->cap) {
	
		//removeItem();
	
	
	}

	this->itemArr[this->numItems++] = item.clone();

}
void Inventory::removeItem(int index) {

	for (size_t i = index; i <= cap; i++) {

		itemArr[i-1] = itemArr[i];

	}
	

}
