#include <iostream> // To use cin/cout
#include <iomanip> // To access setw for output width
using namespace std;

int main()
{
	int month, day, year; // Variable initialization

	cout << "Magic Date Validator" << endl;
	cout << "By Forrest Moulin" << endl << endl;

	// User prompt
	cout << "Please enter a numeric month, day, "
		<< "and two-digit year, separated by spaces." 
		<< endl << endl;

	// Get user input (integers)
	cin >> month >> day >> year;

	// Visibility of system status/confirm input
	cout << endl << "You entered the following:" << endl;
	cout  << left << setw(10) << "Month" <<  month << endl;
	cout << left << setw(10) << "Day"  <<  day << endl;
	cout << left << setw(10) << "Year" <<  year << endl << endl;

	// Compare year value to product of month and day
	if (year == month * day) 
	{
		cout << "That's a magic date! :)" << endl;
	}
	else 
	{
		cout << "That is not a magic date. :(" << endl;
	}

}
/*
* CONSOLE OUTPUT # 1 (MAGIC DATE VALIDATED)
* Magic Date Validator
* By Forrest Moulin
*
* Please enter a numeric month, day, and two-digit year, separated by spaces.
*
* 2 2 04
*
* You entered the following:
* Month     2
* Day       2
* Year      4
*
* That's a magic date! :)
*/

/*
* CONSOLE OUTPUT # 2 (NOT A MAGIC DATE)
* Magic Date Validator
* By Forrest Moulin
*
* Please enter a numeric month, day, and two-digit year, separated by spaces.
*
* 9 16 22
*
* You entered the following:
* Month     9
* Day       16
* Year      22
*
* That is not a magic date. :(
*/
