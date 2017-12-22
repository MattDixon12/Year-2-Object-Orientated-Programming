/* Title: GameCharacter Class File
   Date: 12/12/17
*/
#include "GameCharacter.h"



GameCharacter::GameCharacter() //Constructor
{
}

bool GameCharacter::Attack(GameCharacter & character) //Attacks a character
{
	return false;
}

void GameCharacter::Defend(int armour) //Defends a character
{
}

void GameCharacter::walk() //Makes a character walk
{
}

void GameCharacter::Run() //Makes a character run
{
}

void GameCharacter::Sleep() //Puts a character into a sleep state
{
}

Weapon GameCharacter::GetWeapon(Weapon & weapon)
{
	return Weapon();
}

Armour GameCharacter::GetArmour(Armour & armour)
{
	return Armour();
}

bool GameCharacter::PickUpWeapon(Weapon & weapon)
{
	return false;
}

bool GameCharacter::PickUpArmour(Armour & armour)
{
	return false;
}

bool GameCharacter::DropItem(Weapon & item)
{
	return false;
}

bool GameCharacter::DropItem(Armour & item)
{
	return false;
}

bool GameCharacter::EquipWeapon(int weapon)
{
	return false;
}

CharacterState GameCharacter::GetState()
{
	return CharacterState();
}

void GameCharacter::AddFood(int amount)
{
}

void GameCharacter::Eat()
{
}


GameCharacter::~GameCharacter() //Destructs a character
{
}
