/* Title: Weapon Header File
   Date: 12/12/17
*/
#pragma once
#include <string>
class Weapon
{

private:
	int weaponHitStrength_;
	int weaponHealth_;

public:
	Weapon();

	Weapon(std::string weaponName, int Value, float weight,
		int hitStrength, int health);

	~Weapon();
};

