#include <cstdlib>
#include "LoadedDice.h"

/************************************************
 * LoadedDice constructor
 ***********************************************/
LoadedDice::LoadedDice() : Dice()
{
}
/************************************************
 * LoadedDice constructor
 ***********************************************/
LoadedDice::LoadedDice(int sides) : Dice(sides)
{
}

/************************************************
 * diceRoll
 ***********************************************/
int LoadedDice::diceRoll()
{
        int rolled = (rand() % sides + 1);
        return rolled * 2;
}

	
