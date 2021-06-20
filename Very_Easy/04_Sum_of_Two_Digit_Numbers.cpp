/*
Source: Edabit
Link : https://edabit.com/challenge/Td96R6j3p3FaENSA5
Date: 06/19/2021


Sum of Two Digit Numbers
==========================
For this challenge, you are supposed to find the sum of the digits of a two-digit number. Sounds easy, right? But for this challenge, I expect you to find the sum of the digits mathematically.

Sure, you can convert the number into a string and then manipulate it so it returns the sum of the digits, but the point of this challenge is to see if you know how to return the sum of the digits of a two-digit number mathematically.

Examples
twoDigitSum(45) ? 9

twoDigitSum(38) ? 11

twoDigitSum(67) ? 13
Notes
% //

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int twoDigitSum(int n){
  return n/10 + n%10 ;
}

int main() {
	
cout << " twoDigitSum(45) : " << 	twoDigitSum(45)<< endl; //9
cout<<   " twoDigitSum(38) : " <<    twoDigitSum(38) << endl; // 11
cout <<   " twoDigitSum(67) : "  <<    twoDigitSum(67)  << endl; // 13
return 0; 
}


/*
twoDigitSum(45) ? 9
twoDigitSum(38) ? 11
twoDigitSum(67) ? 13
*/
