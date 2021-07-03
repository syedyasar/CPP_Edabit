/*
Source: Edabit
Link : https://edabit.com/challenge/35eTtd3RHMeWYukhM
Date: 07/02/2021

Keyboard Mistakes
===================

Character recognition software often makes mistakes when documents (especially old ones written with a typewriter) are digitized.

Your task is to correct the errors in the digitized text. You only have to handle the following mistakes:

A is misinterpreted as 4
S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1
The test cases contain numbers only by mistake.

Examples
keyboardMistakes("MUB45H1R") ? "MUBASHIR"

keyboardMistakes("DUBL1N") ? "DUBLIN"

keyboardMistakes("51NG4P0RE") ? "SINGAPORE"
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string keyboardMistakes(string s) {
	for(char &a:s){
		if(a=='4') a='A';
		else if(a=='5') a='S';
		else if(a=='0') a='O';
		else if(a=='1') a='I';
	}
return s;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
