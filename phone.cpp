/*
NAME: phone.cpp
AUTHOR: Roger Aragon
DATE: 3/4/19
EMAIL: aragonr87056@student.vvc.edu
DESCRIPTION: takes a 10 digit numbe and translate it into a phone number
*/

#include <iostream>
#include <string>

using namespace std;

main()
{
	string input,phone;
	cout <<"Enter a ten digit number:" << endl;
	cin >> input;

	phone = "(" + input.substr(0, 3);
	phone = phone + ") " + input.substr(3, 3);
	phone = phone + "-" + input.substr(6);

	cout << "Your phone number is:" << phone << endl;
	

return 0;
}