/* Title: Item Class File
   Date: 12/12/17
*/
#include "Item.h"



Item::Item() //Constructor
{
}

Item::Item(std::string itemName, int itemValue, float weight) : //Another constructor
	itemName_(itemName), itemValue_(itemValue), weight_(weight) {
}

void Item::SetItemName(std::string itemName) { //Sets the name attribute of an item

	itemName_ = itemName;

}

std::string Item::GetItemName()const { //Returns the name of an item

	return itemName_;

}


void Item::SetItemValue(int itemValue){ //Sets the value of an item

	itemValue_ = itemValue;

}


int Item::GetitemValue() const{ //Returns the value of an item

	return itemValue_;

}

void Item::SetWeight(float weight){ //Sets the weight of an item

	weight_ = weight;

}


float Item::GetWeight(float weight) const{ //Returns the weight of an item

	return weight_;

}


Item::~Item() //Destructor
{
}
