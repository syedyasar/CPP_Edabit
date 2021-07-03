/*
Source: Edabit
Link : https://edabit.com/challenge/TbbFycuApYyDFtxnM
Date: 07/01/2021

Count the Syllables
======================

Create a function that returns the number of syllables in a simple string. The string is made up of short repeated words like "Lalalalalalala" (which would have 7 syllables).

Examples
countSyllables("Hehehehehehe") ? 6

countSyllables("bobobobobobobobo") ? 8

countSyllables("NANANA") ? 3
Notes
For simplicity, please note that each syllable will consist of two letters only.
Your code should accept strings of any case (upper, lower and mixed case).
*/

#include<iostream>
#include<vector>


#include<cmath>
using namespace std;
int countSyllables(string str) {
	return str.size()/2;
}
int main(){
	cout << countSyllables("Hehehehehehe")   << endl;
	cout << countSyllables("Hehehehehehe") << endl;	
	cout << countSyllables("NANANA")  << endl;		
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

countSyllables("Hehehehehehe") ? 6

countSyllables("bobobobobobobobo") ? 8

countSyllables("NANANA") ? 3
*/
