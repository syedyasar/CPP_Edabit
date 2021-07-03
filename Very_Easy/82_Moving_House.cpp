/*
Source: Edabit
Link : https://edabit.com/challenge/987k36y8XsMNCYrTd
Date: 06/29/2021

Moving House
==============

I'd like to calculate how long on average I've lived in a single house.

Given a person's age and the number of times they've moved house as moves, return the average number of years that they've spent living in the same house.

Examples
yearsInOneHouse(30, 1) ? 15

yearsInOneHouse(15, 2) ? 5

yearsInOneHouse(80, 0) ? 80
Notes
You can assume that the tests include people who've always lived in a house.
Round to the nearest year.
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int yearsInOneHouse(int age, int moves) {
	return round(1.0*age/(moves+1));
}


int main(){
	cout << yearsInOneHouse(30, 1)   << endl;
	cout << yearsInOneHouse(15, 2) << endl;	
	cout << yearsInOneHouse(80, 0) << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

yearsInOneHouse(30, 1) ? 15

yearsInOneHouse(15, 2) ? 5

yearsInOneHouse(80, 0) ? 80
Notes

*/
