#include <cstdlib>
#include <ctime>
#include "Dice.h"

/************************************************
 * default constructor for dice class
 ***********************************************/

Dice::Dice()
{
	this -> sides = 6;
	srand(time(0));

}

/************************************************
 * constructor for dice class
 ***********************************************/

Dice::Dice(int sides)
{
	this -> sides = sides;
	srand(time(0));
}

/************************************************
 * diceRoll function 
 ***********************************************/

int Dice::diceRoll()
{
                return (rand() % sides + 1);
}

