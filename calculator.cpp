// Katie Mays
// October 12, 2017
// Lab #5: four-function calculator

#include <iostream>
using namespace std;
int main()
{
	// how to exit
	cout << "TIP: To exit the calculator, enter 0 * 0 when prompted for equation." << endl;
	cout << "\t" << endl;

	// variables
	int numA, numB;
	char ops;
	bool moreProcessing;
	
	// init
	moreProcessing = true;

	// input
	while (moreProcessing == true)
	{
		cout << "Enter an equation: ";
		cin  >> numA >> ops >> numB;
			
		// processing
		switch (ops)
		{
			case '+':
				cout << numA << " + " << numB << " = " << numA + numB << endl;
			break;
		
			case '-':
				cout << numA << " - " << numB << " = " << numA - numB << endl;
			break;
		
			case '*':
				if (numA == 0 && numB == 0)
				{
					moreProcessing = false;
				}
				else
				{
					cout << numA << " * " << numB << " = " << numA * numB << endl;
				}
			break;

			case '/':
				if (numB == 0)
					cout << "ERROR! cannot divide by 0." << endl;
				else
					cout << numA << " / " << numB << " = " << numA / numB << endl;	
			break;
		} // end switch
	
	// space
	cout << "\t" << endl;

	} // end while loop

	// exit message
	cout << "Thank you for using calculator! Goodbye." << endl;

	return 0;
}
