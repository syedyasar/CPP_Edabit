/*
Source: Edabit
Link : https://edabit.com/challenge/F3X8GyYxYXrkGf8xe
Date: 07/04/2021

Don't Roll Doubles!
=====================

John is playing a dice game. The rules are as follows.

Roll two dice.
Add the numbers on the dice together.
Add the total to your overall score.
Repeat this for three rounds.
But if you roll DOUBLES, your score is instantly wiped to 0 and your game ends immediately!

Create a function which takes in a matrix as input, and return John's score after his game has ended.

Examples
diceGame([[1, 2], [3, 4], [5, 6]]) ? 21

diceGame([[1, 1], [5, 6], [6, 4]]) ? 0

diceGame([[4, 5], [4, 5], [4, 5]]) ? 27
Notes
Ignore all other arrays in the matrix if a throw happens to be doubles and go straight to returning 0.
John only has two dice and will always give you outcomes for three rounds.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int diceGame(vector<vector<int>> a) {
	int score=0;
	for(int i=0;i<3;i++){
		if(a[i][0]==a[i][1]) return 0 ;
    else score+= a[i][0]+ a[i][1] ;
	}
	return score;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
