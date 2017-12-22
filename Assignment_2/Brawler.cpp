/* Title: Brawler Class File
   Date: 12/12/17
*/
#include "Brawler.h"
#include "string"



Brawler::Brawler() //Constructor
{
}

Brawler::Brawler(std::string name, float health, float weightLimit, int food, CharacterState state, int punchDamage, int strength)//Another constructor
{
	
}

int Brawler::SetpunchDamage(int punchDamage)
{
	punchDamage_ = punchDamage;
}

int Brawler::Setstrength(int strength)
{
	strength_ = strength;
}

int Brawler::GetpunchDamage()
{
	return punchDamage_;
}


int Brawler::Getstrength()
{
	return strength_;
}


void Brawler::Sleep()
	{
		this->characterState = characterState::Sleeping

			this->SetHealth(this->GetHealth() + (this->GetHealth()*0.20))
			if (this->GetHealth() > 100)
				this->SetHealth(100);
	}

}











bool Brawler::Attack(GameCharacter, character)
{
	GameCharacter::Attack(character);

	bool success = false;

	int strengthValue = Getstrength();
	int bruteDamage = 0;

	for (int i = 0; strengthValue > 0; i++)
	{
		bruteDamage = bruteDamage + 5;
		strengthValue = strengthValue - 10;
	}

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
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - (100 + bruteDamage));
								success = true;
								character.SetState() == CharacterState::Dead;
							}
							else if (character.GetState() == CharacterState::Dead)
							{
								success = true;

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - (10 + bruteDamage));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > (20 + bruteDamage))
								{
									character.SetHealth(character.GetHealth() - (20 + bruteDamage));
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
						if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
						{
							character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
						}
						else
						{
							character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
							character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
						}


						if (character.GetState() == CharacterState::Sleeping)
						{
							character.SetHealth(character.GetHealth() - (100 + bruteDamage));
							success = true;
							character.SetState() == CharacterState::Dead;
						}
						else if (character.GetState() == CharacterState::Dead)
						{
							success = true;
						}
						else if (character.GetState() == CharacterState::Defending)
						{
							character.SetHealth(character.GetHealth() - (10 + bruteDamage));
							success = true;
							if (character.GetHealth() = 0)
								character.SetState() == CharacterState::Dead;
						}
						else
						{
							if (character.GetHealth() > (20 + bruteDamage))
							{
								character.SetHealth(character.GetHealth() - (20 + bruteDamage));
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
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - (100 + bruteDamage));
								character.SetState() == CharacterState::Dead;
								success = true;
							}
							else if (character.GetState() == CharacterState::Dead)
							{

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - (10 + bruteDamage));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > (20 + bruteDamage))
								{
									character.SetHealth(character.GetHealth() - (20 + bruteDamage));
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

bool Brawler::Brawl(GameCharacter, character)
{

	bool success = false;

	int strengthValue = Getstrength();
	int bruteDamage = 0;

	for (int i = 0; strengthValue > 0; i++)
	{
		bruteDamage = bruteDamage + 5;
		strengthValue = strengthValue - 10;
	}

	int hitChance = rand() % 100 - 1;

	if (this->GetEquippedWeapon() == -1)
	{
		if (this->GetHealth() >= 20)
		{
			if (character.GetState() != CharacterState::Dead)
			{
				if (character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() >= this->GetpunchDamage())
				{
					if (hitChance <= 20)
					{
						if (character.GetState() == CharacterState::Defending)
						{
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - ((100 + bruteDamage) / 2));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else if (character.GetState() == CharacterState::Dead)
							{
								success = true;

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - ((10 + bruteDamage) / 2));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > ((20 + bruteDamage) / 2))
								{
									character.SetHealth(character.GetHealth() - ((20 + bruteDamage) / 2));
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
				}
				else if (hitChance <= 60)
				{
					if (character.GetState() == CharacterState::Defending)
					{
						if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
						{
							character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
						}
						else
						{
							character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
							character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
						}


						if (character.GetState() == CharacterState::Sleeping)
						{
							character.SetHealth(character.GetHealth() - ((100 + bruteDamage) / 2));
							success = true;
							if (character.GetHealth() = 0)
								character.SetState() == CharacterState::Dead;
						}
						else if (character.GetState() == CharacterState::Dead)
						{
							success = true;
						}
						else if (character.GetState() == CharacterState::Defending)
						{
							character.SetHealth(character.GetHealth() - ((10 + bruteDamage) / 2));
							success = true;
							if (character.GetHealth() = 0)
								character.SetState() == CharacterState::Dead;
						}
						else
						{
							if (character.GetHealth() > ((20 + bruteDamage) / 2))
							{
								character.SetHealth(character.GetHealth() - ((20 + bruteDamage) / 2));
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
							if (character.GetArmour(character.GetEquippedArmor()).GetArmorHealth() > (bruteDamage + 10))
							{
								character.getArmor(character.GetEquippedArmor()).SetArmourHealth(character.GetArmour(character.GetEquippedArmour()).GetArmourHealth() - (10 + bruteDamage));
							}
							else
							{
								character.GetArmour(character.GetEquippedArmour()).SetArmourHealth(0);
								character.GetArmour().erase(character.GetArmour().begin() + character.GetEquippedArmour());
							}


							if (character.GetState() == CharacterState::Sleeping)
							{
								character.SetHealth(character.GetHealth() - ((100 + bruteDamage) / 2));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;

							}
							else if (character.GetState() == CharacterState::Dead)
							{

							}
							else if (character.GetState() == CharacterState::Defending)
							{
								character.SetHealth(character.GetHealth() - ((10 + bruteDamage) / 2));
								success = true;
								if (character.GetHealth() = 0)
									character.SetState() == CharacterState::Dead;
							}
							else
							{
								if (character.GetHealth() > ((20 + bruteDamage) / 2))
								{
									character.SetHealth(character.GetHealth() - ((20 + bruteDamage) / 2));
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


				}

			}
		}
	}
	return success;
}

Brawler::~Brawler() //Destructor
{
}
