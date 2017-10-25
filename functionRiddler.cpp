// Katie Mays
// October 19, 2017
// HW #6: the riddler function

#include <iostream> 
using namespace std;

bool numberIsOdd(int num) // dummy variable name just to hold place
{
	if ((num % 2) == 1) // reuse dummy variable within function declaration
		return true;
	else 
		return false;
}
bool sumIs27(int num) 
{
	int dig1, dig2, dig3, dig4;

	dig1 = num / 1000 % 10;
	dig2 = num / 100  % 10;
	dig3 = num / 10   % 10;
	dig4 = num / 1    % 10;

	if ((dig1 + dig2 + dig3 + dig4) == 27)
		return true;
	else 
		return false;
} 
bool allDifferent(int num)
{
	int dig1, dig2, dig3, dig4;

	dig1 = num / 1000 % 10;
	dig2 = num / 100  % 10;
	dig3 = num / 10   % 10;
	dig4 = num / 1    % 10;

	if (dig1 == dig2 || dig1 == dig3 || dig1 == dig4 || dig2 == dig3 || dig3 == dig4)
		return false;
	else
		return true;
}
bool threeTimes(int num)
{
	int dig1, dig3;

	dig1 = num / 1000 % 10;
	dig3 = num / 10   % 10;

	if (dig1 == 3 * dig3)
		return true;
	else
		return false;
}
int main()
{
	// variables
	int i;

	// processing
	for (i = 1000; i <= 9999; i++)
	{
		if (numberIsOdd(i) == false)
			continue;
		if (sumIs27(i) == false)
			continue;
		if (allDifferent(i) == false)
			continue;
		if (threeTimes(i) == false)
			continue;

		cout << i << " is a number:" << endl;
		cout << "-which is odd" << endl;
		cout << "-whose digits sum to 27" << endl; 
		cout << "-which has no repeated digits" << endl;
		cout << "-whose digit in the thousands place is three times the digit in the tens place" << endl;
	}


	return 0;
}
