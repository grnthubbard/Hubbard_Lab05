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
	
		cout << "Enter a phrase you want to be cyphered! ";
		getline(cin, test);


	int f = 0;
	int i = 0;
	
	cout << "Encoded Message: \"";
	for (int i = 0; i < test.length(); i++) {
		int l = (int(test[i]));
		if (int(test[i]) >= 65 && int(test[i]) <= 90) {
			f = int(test[i]-65);
			cout << stringCypher[f] << "";
		}
		else if (int(test[i]) >= 97 && int(test[i]) <= 122) {
			l = l - 32;
			l = stringCypher[l-65];
			l = l + 32;
			cout << char(l);
		
		}
		else {
			cout << test[i];
		}
	}
	cout << "\"";


}