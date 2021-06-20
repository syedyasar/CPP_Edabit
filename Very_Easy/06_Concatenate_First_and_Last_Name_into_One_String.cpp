/*
Source: Edabit
Link : https://edabit.com/challenge/yN9Dkm5zTfyaDtrjx
Date: 06/19/2021


Concatenate First and Last Name into One String
==================================================

Given two strings, firstName and lastName, return a single string in the format "last, first".

Examples
concatName("First", "Last") ? "Last, First"

concatName("John", "Doe") ? "Doe, John"

concatName("Mary", "Jane") ? "Jane, Mary"
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std ;

string concatName(string firstName, string lastName) {
	return lastName   + ", " + firstName;
}

int main() {

cout << " concatName(\"First\", \"Last\")  : " << 	concatName("First", "Last") << endl; //" Last, First"
cout<<   " concatName(\"John\", \"Doe\") " <<    concatName("John", "Doe") << endl; //"Doe, John"
cout <<   " concatName(\"Mary\", \"Jane\")  : "  <<   concatName("Mary", "Jane")   << endl; // "Jane, Mary"

return 0; 
}


/*
concatName("First", "Last") ? "Last, First"

concatName("John", "Doe") ? "Doe, John"

concatName("Mary", "Jane") ? "Jane, Mary"
*/
