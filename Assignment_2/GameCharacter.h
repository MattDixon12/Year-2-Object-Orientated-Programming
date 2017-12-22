/* Title: GameCharacter Header File
   Date: 12/12/17
*/
#pragma once
#include <string>
#include <vector>
#include "Item.h"
#include "BlackWitch.h"
#include "Brawler.h"
#include "Cleric.h"
#include "Orc.h"

class GameCharacter
{
	enum CharacterState {Idle, Running, Sleeping, Walking, Defending, Dead};

private:

	std::string characterName_;
	float health_;
	float weightLimit_;
	int equippedWeapon_;
	int equippedArmour_;
	std::vector <Weapon> weapons_;
	std::vector <Armour> armour_;
	int food_;
	CharacterState state_;

public:
	GameCharacter();

	virtual bool Attack(GameCharacter &character);
	void Defend(int armour);
	void walk();
	void Run();
	virtual void Sleep();
	Weapon GetWeapon(Weapon &weapon);
	Armour GetArmour(Armour &armour);
	bool PickUpWeapon(Weapon &weapon);
	bool PickUpArmour(Armour &armour);
	bool DropItem(Weapon &item);
	bool DropItem(Armour &item);
	bool EquipWeapon(int weapon);
	CharacterState GetState();
	void AddFood(int amount);
	void Eat();

	~GameCharacter();
};

