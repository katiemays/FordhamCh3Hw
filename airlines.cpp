// Katie Mays
// October 5, 2017
// Lab #4: conditional statements, fordham airlines

#include <iostream>
using namespace std;

int main ()
{
	// init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// variables
	char city, when;
	double time, price, n;

	// going off Miami prices
	double multFactor, money, total;
	const double mornD = 150.00, niteD = 100.00;
	const double mornE = 180.00, niteE = 120.00;
	
	// greeting
	cout << "\t" << endl;
	cout << "WELCOME TO FORDHAM AIRLINES!" << endl;
	cout << "\t" << endl;

	// input city
	cout << "Enter the city you are traveling to, [C]hicago, [M]iami, or [P]ortland: ";
	cin  >> city;

	// processing
	switch (city)
	{       
		case 'C':
                case 'c':
                        multFactor = 0.5;
                break;
                
		case 'M': 
		case 'm':
			multFactor = 1;
		break;

                case 'P': 
                case 'p': 
                        multFactor = 2;
                break;
                
                default:
                {	cout << "Sorry! Invalid city. Please try again." << endl;
			return 0;
		}
                break;

        }	
	
	// input date and time
	cout << "Enter the time of day you wish to travel, 0-2359: ";
	cin  >> time;
     
	cout << "Enter the type of day you wish to travel, week[D]ay, or week[E]nd: ";
 	cin  >> when;

	// processing
	if (time >= 500 && time < 1900)
	{	if (when == 'D' || when == 'd')
			price = multFactor * mornD;
		if (when == 'E' || when == 'e')
			price = multFactor * mornE;
	}	
	if ((time >= 1900 && time <= 2359)||(time >= 0 && time < 500))
	{	if (when == 'D' || when == 'd')
			price = multFactor * niteD;
		if (when == 'E' || when == 'e')
			price = multFactor * niteE;
	}
	
	// output
	cout << "The price per ticket will be $" << price << "." << endl;
	cout << "How many tickets would you like to purchase? ";
	cin  >> n;

	// processing
	total = price * n;
	
	cout << "Your total cost is $" << total << "." << endl;
	cout << "How much will you pay? ";
	cin  >> money;
	
	if (money >= total)
	{	cout << "Your change is $" << money - total << "." << endl;
		cout << "Your ticket order has been placed!" << endl;
	}
	if (money < total)
		cout << "Not enough money! No tickets ordered." << endl;
 
	return 0;
}
