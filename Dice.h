#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice
{
protected:
	int sides;
public:
	Dice();
	Dice(int sides);
	int diceRoll();
};
