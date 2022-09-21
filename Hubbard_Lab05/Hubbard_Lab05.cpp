// Hubbard_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	vector<char> stringCypher { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
	string test;
	do {

		cout << "Enter a phrase you want to be cyphered!";
		getline(cin, test);
		int stringLength = 0;
		int stringLength = test.length();

		for (int i = 0; i < stringLength; i++) {
			if (test[i] >= 'A' && test[i] <= 'Z') //Is a capital letter //
			{
				stringCypher;
			}
			else if (test[i] >=97 & <= 122) {
				test[i] == char[-32]
			
			
			
			}




			}
		}
		



	} while 













}