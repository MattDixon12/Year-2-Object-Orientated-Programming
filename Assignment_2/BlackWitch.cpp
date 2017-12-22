/* Title: BlackWitch Class File
   Date: 12/12/17
*/

#include "BlackWitch.h"
#include "GameCharacter.h"



BlackWitch::BlackWitch() //Constructor
{
}

virtual bool BlackWitch::Attack(GameCharacter & Character) //Attacks specified enemies using a witch class character
{
   if (darkPower_ == 100){

    }
}

virtual void BlackWitch::Sleep() //Puts a witch class character to sleep
{
}

void BlackWitch::Bewitch(GameCharacter & Character) //Attacks a specified enemy with a chance to put them into sleep state
{
if  ((rand() % 100) < 10 + magicProficiency_ * 5){
        &character.Sleep();
    }
}


BlackWitch::~BlackWitch()//Destructor 
{
}
