/*
Source: Edabit
Link : https://edabit.com/challenge/X6bdx2N7rHorgHXe4
Date: 06/19/2021

Is the Last Character an "N"?
================================

Create a function that takes a string (a random name). If the last character of the name is an "n", return true, otherwise return false.

Examples
isLastCharacterN("Aiden") ? true

isLastCharacterN("Piet") ? false

isLastCharacterN("Bert") ? false

isLastCharacterN("Dean") ? true
Notes
The last character is always lowercase. The function must return a boolean value ( i.e. true or false).
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;
bool isLastCharacterN(string word) {
//	return word.back() == 'n';
	return word[word.length()-1]== 'n';
}

int main(){
	
	cout << isLastCharacterN("Aiden") << endl;
	cout << isLastCharacterN("Piet")  << endl;
	cout << isLastCharacterN("Bert") << endl;
	cout << isLastCharacterN("Dean") << endl;	
}

/*
isLastCharacterN("Aiden") ? true

isLastCharacterN("Piet") ? false

isLastCharacterN("Bert") ? false

isLastCharacterN("Dean") ? true

*/
