/*
Source: Edabit
Link : https://edabit.com/challenge/CEnSAvtTej3ABKHn9
Date: 06/29/2021

Guess the Sequence
====================

Mubashir is trying to figure out the corresponding quadratic formula for the following quadratic sequence of numbers:

N	Result
1	90
2	240
3	450
4	720
5	1050
If you can figure this out, then help him by creating a function that takes a number n and returns the nth number of this quadratic sequence.

Examples
guessSequence(1) ? 90

guessSequence(2) ? 240

guessSequence(3) ? 450
Notes
If you are not sure about how to find the formula of a quadratic sequence, check the Resources.

*/
#include<iostream>
#include<cmath>
using namespace std;
int guessSequence(int n) {
	return 30*n*n+60*n;
}

int main(){
	cout << guessSequence(1) << endl;
	cout << guessSequence(2) << endl;	
	cout << guessSequence(3)<< endl;	
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

guessSequence(1) ? 90

guessSequence(2) ? 240

guessSequence(3) ? 450
Notes

*/
