/*
Source: Edabit
Link : https://edabit.com/challenge/BqMyyggeG4YrYsQBw
Date: 07/02/2021

Capture the Rook
=================

Write a function that returns true if two rooks can attack each other, and false otherwise.

Examples
canCapture(["A8", "E8"]) ? true

canCapture(["A1", "B2"]) ? false

canCapture(["H4", "H3"]) ? true

canCapture(["F5", "C8"]) ? false
Notes
Assume no blocking pieces.
Two rooks can attack each other if they share the same row (letter) or column (number).

*/

#include<iostream>
#include<vector>
using namespace std;
bool canCapture(vector<string> p) {
	return (p[0][0]==p[1][0]) || (p[0][1]==p[1][1]) ;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
