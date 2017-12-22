/* Title: Orc Header File
   Date: 12/12/17
*/
#include "GameCharacter.h"
#include "string"

class Orc : public GameCharacter {

private:
	int ferociousness_;
	int strength_;

public:
	Orc();

	~Orc();

	Orc(std::string name, float health, float weightLimit, int food, CharacterState state, int ferociousness, int strength);


	int Getferociousness();

	int Setferociousness(int ferociousness);

	int Getstrength();

	int Setstrength(int strength);

	virtual bool Attack(GameCharacter, character);

	void Scream(GameCharacter, character);

	virtual void Sleep();
};
