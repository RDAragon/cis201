/*
NAME: change.cpp
AUTHOR: Roger Aragon
DATE: 3/5/19
EMAIL: aragonr87056@student.vvc.edu
DESCRIPTION: takes a price and the money given, 
			and calculates the dollars, quarters, 
			dimes, nickels, and pennies
*/

#include <iostream>

using namespace std;

main()
{
	int dollars = 0, coins = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
	double price;						//initialize price
	cout << "Enter price: " << endl;
	cin >> price;						
	double payment;
	cout << "Enter payment: " << endl;	//initialize payment
	cin >> payment;

	double change;						// initialize change -- only used as background calculation
	change = payment - price;			// calculating change from purchase
	int ch = change * 100;				//converting change to a whole number, and turning into an integer

	dollars = ch / 100;					//calculating the whole dollars
	coins = ch % 100;					//calculating the coins

	//cout << dollars << endl;	next two are used for testing, and are included
	//cout << coins << endl;	to show development process

	while (coins != 0)
	{
		if (coins >= 25)
		{
			coins = coins - 25;
			quarters++;
		}

		else if (coins >= 10)
		{
			coins = coins - 10;
			dimes++;
		}

		else if (coins >= 5)
		{
			coins = coins - 5;
			nickels++;
		}

		else if (coins != 0)
		{
			coins = coins - 1;
			pennies++;
		}
	}

	cout << "Your change is:" <<endl;
	cout << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies";

	return 0;
}