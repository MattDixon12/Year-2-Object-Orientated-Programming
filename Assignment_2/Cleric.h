/* Title: Cleric Header File
   Date: 12/12/17
*/
#include "string"
#include "GameCharacter.h"
#pragma once
class Cleric
{

private:

	int pietyLevel_;

public:
	Cleric();

	virtual bool Attack(GameCharacter &Character);
	virtual void Sleep();
	void Prayfor(GameCharacter &Character);

	int GetpietyLevel();
	int SetpietyLevel(int pietyLevel);


	~Cleric();
};

