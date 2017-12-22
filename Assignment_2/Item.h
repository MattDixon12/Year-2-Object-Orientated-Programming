/* Title: Item Header File
   Date: 12/12/17
*/
#pragma once
#include <string>
#include "Weapon.h"
#include "Armour.h"


class Item
{

private:

	std::string itemName_;
	int itemValue_;
	float weight_;

public:
	Item();

	Item(std::string itemName, int itemValue, float weight);

	void SetItemName(std::string itemName);
	std::string GetItemName()const;

	void SetItemValue(int itemValue);
	int GetitemValue() const;

	void SetWeight(float weight);
	float GetWeight(float weight) const;
	
	~Item();


};

