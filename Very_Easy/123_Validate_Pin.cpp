/*
Source: Edabit
Link : https://edabit.com/challenge/iNSisYNxdZCdfcDbt
Date: 07/02/2021

Validate Pin
==============

Create a function to test if a string is a valid pin or not.

A valid pin has:

Exactly 4 or 6 characters.
Only numerical characters (0-9).
No whitespace.
Examples
valid("1234") ? true

valid("45135") ? false

valid("89abc1") ? false

valid("900876") ? true

valid(" 4983") ? false
Notes
Empty strings should return false when tested.

*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
bool valid(string text){
	for(char i:text) if(i>57 || i< 48) return 0;
	return (text.size()==4 || text.size()==6) ;
}

int main(){
	
	cout << valid("123456") << endl;
	cout << valid("4512a5") << endl;	
	cout << valid("") << endl;
	cout << valid("000000")  << endl;	
	return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(valid_){
It(test1){Assert::That(valid("123456"), Equals(true));}
It(test2){Assert::That(valid("4512a5"), Equals(false));}
It(test3){Assert::That(valid(""), Equals(false));}
It(test4){Assert::That(valid("9451"), Equals(true));}
It(test5){Assert::That(valid("213132"), Equals(true));}
It(test6){Assert::That(valid("000000"), Equals(true));}
It(test7){Assert::That(valid(" 4520"), Equals(false));}
It(test8){Assert::That(valid("115632 "), Equals(false));}
};
*/
