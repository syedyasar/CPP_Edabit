/*
Source: Edabit
Link : https://edabit.com/challenge/Cf8Ta3KiTe2MkSMom
Date: 06/19/2021



Drinks Allowed?
==================

A bartender is writing a simple program to determine whether he should serve drinks to someone. He only serves drinks to people 18 and older and when he's not on break.

Given the person's age, and whether break time is in session, create a function which returns whether he should serve drinks.

Examples
shouldServeDrinks(17, true) ? false

shouldServeDrinks(19, false) ? true

shouldServeDrinks(30, true) ? false
Notes
Return true or false.
Some countries have a slightly higher drinking age, but for the purposes of this challenge, it will be 18.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

bool shouldServeDrinks(int age, bool onBreak) {
	if((age>=18) && (!onBreak))	return true;
	else  return false;
}

int main(){
cout << 	shouldServeDrinks(17, true) << endl;  //   false
cout << 	shouldServeDrinks(19, false) << endl;  //  true
cout << 	shouldServeDrinks(30, true) << endl;  // false
}

/*
shouldServeDrinks(17, true) ? false

shouldServeDrinks(19, false) ? true

shouldServeDrinks(30, true) ? false

*/
