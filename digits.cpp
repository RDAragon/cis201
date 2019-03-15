/*
NAME: digits.cpp
AUTHOR: Roger Aragon
DATE: 3/4/19
EMAIL: aragonr87056@student.vvc.edu
DESCRIPTION: breaks a number to its individual digits
*/

#include <iostream>

using namespace std;

main()
{
	int input,tenK,tenKrem,oneK,oneKrem,hund,hundrem,ten,one;
	// declaring the variables to be used
	cout << "Enter a number (1-99999)" << endl;
	cin >> input; //the input number

	tenK = input / 10000; //isolating the 10K digit
	tenKrem = input % 10000; //isolating the remaining digits to be used below
	//below, the pattern repeats: isolate the leading digit, pass the remaining digits down
	oneK = tenKrem / 1000;
	oneKrem = tenKrem % 1000;
	hund = oneKrem / 100;
	hundrem = oneKrem % 100;
	ten = hundrem / 10;
	one = hundrem % 10;

	cout << "The number broken down is:" << endl;
	cout << tenK << " " << oneK << " " << hund << " " << ten << " " << one;

	return 0;
}