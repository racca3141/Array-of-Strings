// Emerson Racca
// 10/13/2021
// Lab 7c - Array of Strings


/*
Part I: Prompt the user for a single string and store it in a variable named userString.

a. Use a for loop to print the string, char by char, with a dash '-' char between each.

b. Use a for loop to print the string backwards, char by char, with a dash '-' char between each.

Part II:  Create an array of 5 strings named userStrings. Use a generalized array size.

const int n = 5;
string userStrings[n];
a. Populate the array with user input in a for loop.

b. Print the results in a double nested for loop, char by char, with an asterisk '*' char between each letter in order.

(Remember to use the getline() function to gain string input from the user.)
*/

#include<iostream>
#include<string>

using namespace std;

int main (void) {

	string userString;

	const int n = 5;
	string userStrings[n];

	cout << "Array of Strings\n\n";

	cout << "Enter a string: ";
	getline(cin, userString);

	cout << endl;

	for (int i = 0; i < (int) userString.size() ; i++) { // (int) cast to remove signed/unsigned mismatch warning.
		cout << userString[i];
		if (i != userString.size() - 1)
			cout << "-";
	}

	cout << endl;

	for (int i = userString.size() - 1; i >= 0; i--) {
		cout << userString[i];
		if (i != 0)
			cout << "-";
	}

	// Part II

	cout << endl << endl << endl;

	for (int i = 0; i < n; i++) {
		cout << "Enter a string: ";
		getline(cin, userStrings[i]);
	}
	
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (int) userStrings[i].size(); j++) {
			cout << userStrings[i][j];
			if (j != userStrings[i].size() - 1)
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}
