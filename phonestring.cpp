// Katie Mays
// Oct. 12, 2017
// sstring built in functions

#include <iostream>
using namespace std;

int main()
{
	//vars
	string phone;
	int i, len;
	char token;

	//input
	cout << "Enter a phone string : ";
	cin  >> phone;

	//processing
	len = phone.length();

	for (i=0;i < len;i++)
	{
		token = phone.at(i);
		
		switch (token)
		{
			case 'A':
			case 'a':
			case 'B':
			case 'b':
			case 'C':
			case 'c':
				cout << "2";
			break;
			
			case 'D':
			case 'd':
			case 'E':
			case 'e':
			case 'F':
			case 'f':
				cout << "3";
			break;

			case 'G':
			case 'g':
			case 'H':
			case 'h':
			case 'I':
			case 'i':
				cout << "4";
			break;
		
			case 'J':
			case 'j':
			case 'K':
			case 'k':
			case 'L':
			case 'l':
				cout << "5";
			break;
			
			case 'M':
			case 'm':
			case 'N':
			case 'n':
			case 'O':
			case 'o':
				cout << "6";
			break;

			case 'P':
			case 'p':
			case 'Q':
			case 'q':
			case 'R':
			case 'r':
			case 'S':
			case 's':
				cout << "7";
			break;
		
			case 'T':
			case 't':
			case 'U':
			case 'u':
			case 'V':
			case 'v':
				cout << "8";
			break;
			
			case 'W':
			case 'w':
			case 'Y':
			case 'y':
			case 'Z':
			case 'z':
				cout << "9";
			break;

			default:
				cout << token;
			break;

		}
	}
	
	cout << "\t" << endl;

	return 0;
}
