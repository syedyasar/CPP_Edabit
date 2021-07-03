/*
Source: Edabit
Link :  https://edabit.com/challenge/ffwWFjCgcTmsEcpi2
Date: 07/01/2021

Hurdle Jump
=============

Create a function that takes an array of hurdle heights and a jumper's jump height, and determine whether or not the hurdler can clear all the hurdles.

A hurdler can clear a hurdle if their jump height is greater than or equal to the hurdle height.

Examples
hurdleJump([1, 2, 3, 4, 5], 5) ? true

hurdleJump([5, 5, 3, 4, 5], 3) ? false

hurdleJump([5, 4, 5, 6], 10) ? true

hurdleJump([1, 2, 1], 1) ? false
Notes
Return true for the edge case of an empty array of hurdles. (Zero hurdles means that any jump height can clear them).

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

/*
using namespace std;
bool hurdleJump(vector<int> h, int j) {
  return j>=*max_element(h.begin(),h.end());
}
*/
bool hurdleJump(vector<int> hurdles, int jumpHeight) {
	for(int i=0;i<hurdles.size();i++){
		if(hurdles[i]>jumpHeight) return 0;
	}
 return 1;
}
int main() {
	cout <<hurdleJump({1, 2, 3, 4, 5}, 5)  << endl;
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

hurdleJump([1, 2, 3, 4, 5], 5) ? true

hurdleJump([5, 5, 3, 4, 5], 3) ? false

hurdleJump([5, 4, 5, 6], 10) ? true

hurdleJump([1, 2, 1], 1) ? false
*/
