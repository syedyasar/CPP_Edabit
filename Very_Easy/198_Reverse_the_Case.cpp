/*
Source: Edabit
Link : https://edabit.com/challenge/nFzipHDLBZTWpekQW
Date: 07/05/2021

Reverse the Case
=================

Given a string, create a function to reverse the case. All lower-cased letters should be upper-cased, and vice versa.

Examples
reverseCase("Happy Birthday") ? "hAPPY bIRTHDAY"

reverseCase("MANY THANKS") ? "many thanks"

reverseCase("sPoNtAnEoUs") ? "SpOnTaNeOuS"
Notes
N/A

*/
#include <iostream>

using namespace std;
string reverseCase(string s) {
	for(char &x:s){
		if(isupper(x)) x=tolower(x);
		else if(islower(x)) x=toupper(x);	
	}
	return s;
}

/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
