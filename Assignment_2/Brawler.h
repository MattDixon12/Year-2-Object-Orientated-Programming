/* Title: Brawler Header File
   Date: 12/12/17
*/
#include "GameCharacter.h"
#include "string"



#pragma once
class Brawler : public GameCharacter
{

public:
	Brawler(); //constructor	
	

	Brawler(std::string name, float health, float weightLimit, int food, CharacterState state, int punchDamage, int strength);


	virtual bool Attack(GameCharacter &Character);
	virtual void Sleep();
	bool Brawl(GameCharacter &Character); //void indicates that it has no return value, need to set it to bool so i can initalise get and set methods for punch

	int GetpunchDamage();
	int Getstrength();
	int SetpunchDamage();
	int Setstrength();

	~Brawler(); //Destructor




private:

	int punchDamage_;
	int strength_;

};

