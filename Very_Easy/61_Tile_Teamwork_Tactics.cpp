/*
Source: Edabit
Link : https://edabit.com/challenge/DsgLguF5RsHKxG99x
Date: 06/29/2021


Tile Teamwork Tactics
=========================

In a board game, a piece may advance 1-6 tiles forward depending on the number rolled on a six-sided dice. If you advance your piece onto the same tile as another player's piece, both of you earn a bonus.

Given you and your friend's tile number, create a function that returns if it's possible to earn a bonus when you roll the dice.

Examples
possibleBonus(3, 7) ? true

possibleBonus(1, 9) ? false

possibleBonus(5, 3) ? false
Notes
You cannot move backward (which is why example #3 doesn't work).
If you are already on the same tile, return false, as you would be advancing away.
Expect only positive integer inputs.

*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>

using namespace std;
bool possibleBonus(int a, int b) {
	return (b>=a+1) && (b<=a+6);
}

int main(){
	cout <<  possibleBonus(3, 7) << endl ;
	cout <<  possibleBonus(1, 9) << endl ;
	cout <<  possibleBonus(5, 3) << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

possibleBonus(3, 7) ? true

possibleBonus(1, 9) ? false

possibleBonus(5, 3) ? false

Notes
*/
