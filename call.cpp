// Katie Mays
// October 12, 2017
// HW #5: program computing cost of a call

#include <iostream>
using namespace std;

int main()
{
	//variables
	char dayA, dayB;
	int timeA, timeB;
	int minutes;
	char colon;
	const double perminDoffpeak = 0.25, perminDpeak = 0.40, perminE = 0.15;
	double tcost;
	char repeat;

	//init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
        repeat = 'Y';

	//while loop 
	while (repeat == 'Y' || repeat == 'y')
	{
		//input
		cout << "What day of the week are you calling on? (Mo Tu We Th Fr Sa Su) : ";
		cin  >> dayA >> dayB;
	
		cout << "                     When did the call commence? (0:00 - 23:59) : ";
		cin  >> timeA >> colon >> timeB;

		cout << "                               How long was the call? (minutes) : "; 
		cin  >> minutes;

		//processing
		if (dayA == 'M' || dayA == 'm' || dayA == 'T' || dayA == 't' || dayA == 'W' || dayA == 'w' || dayA == 'F' || dayA == 'f')
		{
			if ((timeA >= 0 && timeA < 8) || (timeA >= 18 && timeA < 24 && timeB > 0))
				tcost = perminDoffpeak * minutes;
			if (timeA >= 8 && timeA < 18)
				tcost = perminDpeak * minutes;	
		}
		if ((dayA == 'S' || dayA == 's') && (dayB == 'u' || dayB == 'a'))
			tcost = perminE * minutes;
		
		//output
		cout << "Call charges are $" << tcost << "." << endl;
	
		//repeat?
		cout << "Would you like another calculation? (Enter 'Y' if yes) : ";
		cin  >> repeat;

	} //end while loop
		
	return 0;
}
