/*
Source: Edabit
Link : https://edabit.com/challenge/LNAZ6Yeii3byk284h
Date: 06/19/2021


Array of Strings to Array of Numbers
======================================

Create a function that takes as a parameter an array of string numbers and returns an array of numbers.

Example:

["1", "3", "3.6"] ? [1, 3, 3.6]
Examples
toNumberArray(["9.4", "4.2"]) ? [9.4, 4.2]

toNumberArray(["1.4", "4.4", "5.7", "4.3", "9.8", "5.3", "8.7", "8.6", "9.8"])
? [1.4, 4.4, 5.7, 4.3, 9.8, 5.3, 8.7, 8.6, 9.8]

toNumberArray(["9.5", "8.8"]) ? [9.5, 8.8]
Notes
Note that you can receive decimal string numbers as well.


*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;


vector<float> toNumberArray(vector<string> a) {
	vector<float> b;
	for(int i=0; i<a.size();i++)
		b[i]=stof(a[i]);
	return b;
}


/*
["1", "3", "3.6"] 
? [1, 3, 3.6]

toNumberArray(["9.4", "4.2"]) 
? [9.4, 4.2]

toNumberArray(["1.4", "4.4", "5.7", "4.3", "9.8", "5.3", "8.7", "8.6", "9.8"])
? [1.4, 4.4, 5.7, 4.3, 9.8, 5.3, 8.7, 8.6, 9.8]

toNumberArray(["9.5", "8.8"]) ? [9.5, 8.8]

*/
