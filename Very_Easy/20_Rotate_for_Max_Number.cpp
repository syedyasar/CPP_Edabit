/*
Source: Edabit
Link : https://edabit.com/challenge/4eEZ4m52bHSC7q3Rx
Date: 06/19/2021

Is the String Empty?
======================

Rotate for Max Number
Create a function which takes a number (as a string) and returns the maximum value by rearranging its digits.

Examples
rotateMaxNumber("123") ? 321

rotateMaxNumber("001") ? 100

rotateMaxNumber("999") ? 999
Notes
N/A

*/

#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int rotateMaxNumber(string n) {
	sort(n.begin(),n.end());
	reverse(n.begin(),n.end());  
	return atoi(n.c_str());	
//	string::size_type sz;
//	return atoi(n,&sz);
}

int main() {
   cout << rotateMaxNumber("123") << endl;

    return 0;
}
