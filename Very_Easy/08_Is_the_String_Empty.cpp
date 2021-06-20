/*
Source: Edabit
Link : https://edabit.com/challenge/MF97Xr4QJJmNLtDhy
Date: 06/19/2021

Is the String Empty?
======================

Create a function that returns true if a string is empty and false otherwise.

Examples
isEmpty("") ? true

isEmpty(" ") ? false

isEmpty("a") ? false
Notes
A string containing only whitespaces " " does not count as empty.
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

using namespace std;
bool isEmpty(string s) {
	return s.empty(); // s.length()==0;
}


int main() {
	

cout << 	isEmpty("")  << endl; // true

cout << 	isEmpty(" ") << endl; // false

cout << 	isEmpty("a")<< endl; // false

return 0; 
}


/*
isEmpty("") ? true

isEmpty(" ") ? false

isEmpty("a") ? false
*/
