// Katie Mays
// Oct. 25 2017
// ch 3.12: 23 game (self)

#include <iostream>
using namespace std;

int main()
{

	//vars
	int computerPick, humanPick;
	int pile = 23;
	
	//welcome message
	cout << "'23' Game. Your move." << endl;

	do
	{
		//input
		cout << "How many toothpicks would you like to withdraw from the pile? ";
		cin  >> humanPick;
		pile = pile - humanPick;	
		cout << pile << " toothpick(s) remain." <<endl;
	
		//processing
		if (pile > 4)
			computerPick = 4 - humanPick;
		if (pile >= 2 && pile <= 4)
			computerPick = pile - 1;
		if (pile == 1)
		{
			computerPick = 1;
			cout << "Congratulations! You won." << endl;
			return 0;
		}
		if (humanPick > 3 || humanPick < 1)
			cout << "Error! Invalid number of toothpicks." << endl;
		else if (pile == 1 && humanPick == 1)
		{
			cout << "Sorry. You lost. Better luck next time." << endl;
			return 0;
		}

		//output
		cout << "I pick " << computerPick << " to withdraw. Your turn." << endl;
		pile = pile - computerPick;
		cout << pile << " toothpick(s) remain." << endl; 
	} while (pile > 0);

	return 0;
}

