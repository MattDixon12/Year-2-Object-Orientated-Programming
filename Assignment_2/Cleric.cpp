/* Title: Cleric Class File
   Date: 12/12/17
*/
#include "Cleric.h"
#include "string"


Cleric::Cleric() //Constructor 
{

}

Cleric::Cleric(std::string name, float health, float weightLimit, int food, CharacterState state, int pietyLevel)//Another constructor
{
   pietyLevel_ = pietyLevel;
}


int Cleric::SetpietyLevel(int pietyLevel)
{
	pietyLevel_ = pietyLevel;
}


int Cleric::GetpietyLevel()
{
	return pietyLevel_;
}





void Cleric::Sleep() //Puts character into sleep state
{
	this->characterState = characterState::Sleeping

	this->SetHealth(this->GetHealth() + (this->GetHealth()*0.20))
		if (this->GetHealth() > 100) // if health is greather than 100 set health to 100
			this->SetHealth(100);
}





void Cleric::Prayfor(GameCharacter & Character)
{
	int combinedHeal = 0;
	int HealChance = rand() % 100 - 1;
	int pietyHeal = GetpietyLevel();
	int StandardHealChance = 50;

	if (StandardHealChance <= HealChance)
	{
		character.SetHealth(combinedHeal);
	}
}




bool Cleric::Attack(GameCharacter, character)
{
	GameCharacter::Attack(character);

	bool success = false;

	int hitChance = rand() % 100 - 1;

	if (this->GetEquippedWeapon() != -1)
	{
		if (this->GetHealth() >= 20)
		{
			if (character.GetState() != CharacterState::Dead)
			{
				if (character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() >= this->GetWeapon(this->GetEquippedWeapon()).GetWeaponHitStrength())
				{
					if (hitChance <= 20)
					{
						if (character.GetState() == CharacterState::Defending)
						{
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > 10)
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - 10);
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - 100);
								success = true;
								character.SetState() == CharacterState::Dead;
							}
							else if (character.GetState() == CharacterState::Dead)
							{
								success = true;

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - 10);
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > 20)
								{
									character.SetHealth(character.GetHealth() - 20);
									success = true;
								}
								else
								{
									character.SetState() == CharacterState::Dead;
									success = true;
								}
							}
						}
					}
					else
					{
						int weaponDamaged = rand() % 20 - 10;
						this->GetEquippedWeapon().GetWeaponHealth() - weaponDamaged;
					}

				}
				else if (hitChance <= 60)
				{
					if (character.GetState() == CharacterState::Defending)
					{
						if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > 10)
						{
							character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - 10);
						}
						else
						{
							character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
							character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
						}


						if (character.GetState() == CharacterState::Sleeping)
						{
							character.SetHealth(character.GetHealth() - 100);
							success = true;
							character.SetState() == CharacterState::Dead;
						}
						else if (character.GetState() == CharacterState::Dead)
						{
							success = true;
						}
						else if (character.GetState() == CharacterState::Defending)
						{
							character.SetHealth(character.GetHealth() - 10);
							success = true;
							if (character.GetHealth() = 0)
								character.SetState() == CharacterState::Dead;
						}
						else
						{
							if (character.GetHealth() > 20)
							{
								character.SetHealth(character.GetHealth() - 20);
								success = true;
							}
							else
							{
								character.SetState() == CharacterState::Dead;
								success = true;
							}
						}
					}
				}
				else if (character.GetArmour(character.GetEquippedArmour() == -1))
				{
					if (hitChance <= 80)
					{
						if (character.GetState() == CharacterState::Defending)
						{
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > 10)
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - 10);
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - 100);
								character.SetState() == CharacterState::Dead;
								success = true;
							}
							else if (character.GetState() == CharacterState::Dead)
							{

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - 10);
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > 20)
								{
									character.SetHealth(character.GetHealth() - 20);
									success = true;
								}
								else
								{
									character.SetState() == CharacterState::Dead;
									success = true;
								}
							}
						}
					}
					else
					{
						int weaponDamaged = rand() % 20 - 10;
						this->GetEquippedWeapon().GetWeaponHealth() - weaponDamaged;
					}

				}
				else
				{
					int weaponDamaged = rand() % 20 - 10;
					this->GetEquippedWeapon().GetWeaponHealth() - weaponDamaged;
				}
			}
		}
	}
	return success;
}

Cleric::~Cleric() //Destructor
{

}
