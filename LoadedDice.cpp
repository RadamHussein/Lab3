#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.h"
#include "LoadedDice.h"

using namespace std;

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
	srand(time(0));
        int rolled = (rand() % sides + 1);
        return rolled * 2;
}

	
