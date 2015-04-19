#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dice.h"

using namespace std;

class LoadedDice : public Dice
{
public:
	LoadedDice(int sides);
	int diceRoll();
};
