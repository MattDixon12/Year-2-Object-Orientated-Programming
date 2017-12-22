/* Title: BlackWItch Header File
   Date: 12/12/17
*/
#include "string"

#pragma once
class BlackWitch
{

private:
	int magicProficiency_;
	int darkPower_;

public:
	BlackWitch();

	virtual bool Attack(GameCharacter &Character);
	virtual void Sleep();
	void Bewitch(GameCharacter &Character);


	~BlackWitch();
};

