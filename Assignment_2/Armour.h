/* Title: Armour Header File
   Date: 12/12/17
*/
#pragma once
#include <string>

class Armour
{
	enum ArmourType{Cardboard, Leather, Wood, Iron, Steel};
private:

	int defence_;
	int armourHealth_;
	ArmourType armourType_;

public:
	Armour();

	Armour(std::string armourName, int value, float weight,
		int armourStrength, int armourHealth, ArmourType);

	~Armour();
};

