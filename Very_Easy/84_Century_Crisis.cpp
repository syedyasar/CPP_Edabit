/*
Source: Edabit
Link : https://edabit.com/challenge/5LNEcvFBtPzMNMLH5
Date: 06/29/2021

Century Crisis
================

Scientists have discovered that in four decades, the world will EXPLODE! It will also take three decades to make a spaceship to travel to a new planet that can hold the entire world population.

You must calculate the number of people there will be in three decades from now.

The variable population is the world population now.
Assume that every month, someone gives birth to more people n.
Return the number of people there will be when the spaceship is complete.

Examples
futurePeople(256, 2) ? 976

futurePeople(3248, 6) ? 5408

futurePeople(5240, 3) ? 6320
Notes
Humanity's fate lies in your calculation.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int futurePeople(int population, int n) {
	return population+360*n;
}

int main(){
	cout <<  futurePeople(256, 2)   << endl;
	cout <<  futurePeople(3248, 6)  << endl;	
	cout <<  futurePeople(5240, 3) << endl;		
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

futurePeople(256, 2) ? 976

futurePeople(3248, 6) ? 5408

futurePeople(5240, 3) ? 6320

Notes

*/
