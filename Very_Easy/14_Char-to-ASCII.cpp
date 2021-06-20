/*
Source: Edabit
Link : https://edabit.com/challenge/TdcPGgdJda6XGJian
Date: 06/19/2021



Char-to-ASCII
================

Create a function that returns the ASCII value of the passed in character.

Examples
ctoa('A') ? 65

ctoa('m') ? 109

ctoa('[') ? 91

ctoa('\') ? 92
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

unsigned short ctoa(char c) {
	return (int)c;
}

int main(){
cout << 	ctoa('A')<< endl;  //  65
cout << 	ctoa('m') << endl;  //  109
cout << 	ctoa('[') << endl;  // 91
cout << 	ctoa('\\') << endl;  // 92
}

/*
ctoa('A') ? 65

ctoa('m') ? 109

ctoa('[') ? 91

ctoa('\') ? 92

*/
