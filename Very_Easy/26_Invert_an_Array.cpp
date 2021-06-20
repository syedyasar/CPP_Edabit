/*
Source: Edabit
Link :  https://edabit.com/challenge/KnGFXXLesEBku4qeD
Date: 06/19/2021


Invert an Array:
===================

Create a function that takes an array of numbers arr and returns an inverted array.

Examples
invertArray([1, 2, 3, 4, 5]) ? [-1, -2, -3, -4, -5]

invertArray([1, -2, 3, -4, 5]) ? [-1, 2, -3, 4, -5]

invertArray([]) ? []
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

vector<int> invertArray(vector<int> a) {
	for(int i=0;i<a.size();i++){	a[i]=-a[i];	} 
	return a;
}

/*
equalSlices(11, 5, 2) ? true

equalSlices(11, 5, 3) ? false

equalSlices(8, 3, 2) ? true

equalSlices(8, 3, 3) ? false

equalSlices(24, 12, 2) ? true

*/
