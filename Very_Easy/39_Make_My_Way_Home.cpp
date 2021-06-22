/*
Source: Edabit
Link : https://edabit.com/challenge/Cg2oKcS39vetNqCkT
Date: 06/20/2021

Make My Way Home
==================

You will be given a list, showing how far James travels away from his home for each day. He may choose to travel towards or away from his house, so negative values are to be expected.

Create a function which calculates how far James must walk to get back home.

Examples
distanceHome([2, 4, 2, 5]) ? 13

distanceHome([-1, -4, -3, -2]) ? 10

distanceHome([3, 4, -5, -2]) ? 0
Notes
Assume that James only travels in a straight line.
Distance is always a positive number.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

using namespace std;
int distanceHome(vector<int> a) {
	int dist=0;
	for(auto x:a) 		dist+=x;
	return abs(dist);
}

int main(){
  cout << distanceHome([2, 4, 2, 5]) << endl;
  cout << distanceHome([-1, -4, -3, -2]) << endl; 
  cout << distanceHome([3, 4, -5, -2]) << endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

distanceHome([2, 4, 2, 5]) ? 13

distanceHome([-1, -4, -3, -2]) ? 10

distanceHome([3, 4, -5, -2]) ? 0

*/
