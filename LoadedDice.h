#include "Dice.h"

class LoadedDice : public Dice
{
public:
	LoadedDice();
	LoadedDice(int sides);
	int diceRoll();
};
