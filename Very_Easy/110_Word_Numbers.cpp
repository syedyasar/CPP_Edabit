/*
Source: Edabit
Link : https://edabit.com/challenge/p3X6zS5ga93kAFf9g
Date: 07/01/2021

Word Numbers!
==============

Create a function that returns a number, based on the string provided. Here is a list of all digits (if you are non english speaker):

String	Number
"one"	1
"two"	2
"three"	3
"four"	4
"five"	5
"six"	6
"seven"	7
"eight"	8
"nine"	9
"zero"	0
Examples
word("one") ? 1

word("two") ? 2

word("nine") ? 9
Notes
All numbers will be single digit positive integers.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int word(string str) {
	string s1[10]={"zero","one","two","three","four","five", "six", "seven",
								"eight","nine" };
	for(int i=0;i<10;i++){
		if(s1[i]==str) return i;
	}
	return 0;
}

int main() {
    cout << word("one")  << endl;
    cout << word("two") << endl;
    cout << word("nine") << endl;
    return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

word("one") ? 1

word("two") ? 2

word("nine") ? 9

*/
