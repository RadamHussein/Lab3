#include <iostream>
//#include "Dice.h"
#include "LoadedDice.h"

using namespace std;
/*
class Dice
{
protected:
	int sides;

public:
	Dice()
	{
		this -> sides = 6;
	}

	Dice(int sides)
	{
		this -> sides = sides;
	}

	int diceRoll()
	{
		srand(time(0));
		int rolled = (rand() % sides + 1); 
		return rolled;
	}
};

class LoadedDice : public Dice
{
public:

	LoadedDice(int sides) : Dice(sides)
	{
		this -> sides = sides;
	}
 
	int diceRoll()
	{
		srand(time(0));
		int rolled = (rand() % sides + 1);
		return rolled * 2;
	}
};		
*/
int main()
{
	Dice standard;
	Dice nineSided(9);

	int dice1 = standard.diceRoll();
	int dice2 = nineSided.diceRoll();

	cout << "You rolled a " << dice1 << " and a " << dice2 << endl;
	cout << "That adds to " << dice1 + dice2 << endl;

	LoadedDice six_sides;
	LoadedDice nine_sides(9);

	int load_dice1 = six_sides.diceRoll();
	int load_dice2 = nine_sides.diceRoll();

	cout << "You also rolled a " << load_dice1 << " and a " << load_dice2 << endl;

	return 0;
}

				 
	
