#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.h"
#include "LoadedDice.h"

using namespace std;

/************************************************
 * default constructor for dice class
 ***********************************************/

Dice::Dice()
{
	this -> sides = 6;
}

/************************************************
 * constructor for dice class
 ***********************************************/

Dice::Dice(int sides)
{
	this -> sides = sides;
}

/************************************************
 * diceRoll function 
 ***********************************************/

int Dice::diceRoll()
{
	        srand(time(0));
                int rolled = (rand() % sides + 1);
                return rolled;
}

