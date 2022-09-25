// Hubbard_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	vector<char> stringCypher { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
	string input;
	
		cout << "Enter a phrase you want to be cyphered! ";
		getline(cin, input);


	int f = 0;
	int i = 0;
	
	cout << "Encoded Message: \"";
	for (int i = 0; i < input.length(); i++) {
		int l = (int(input[i]));
		if (int(input[i]) >= 65 && int(input[i]) <= 90) {
			f = int(input[i]-65);
			cout << stringCypher[f] << "";
		}
		else if (int(input[i]) >= 97 && int(input[i]) <= 122) {
			l = l - 32;
			l = stringCypher[l-65];
			l = l + 32;
			cout << char(l);
		
		}
		else {
			cout << input[i];
		}
	}
	cout << "\"";


}