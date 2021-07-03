/*
Source: Edabit
Link : https://edabit.com/challenge/vXx97vHQfhv2HjsAq
Date: 07/02/2021

Difference of Max and Min Numbers in Array
=============================================

Create a function that takes an array and returns the difference between the biggest and smallest numbers.

Examples
differenceMaxMin([10, 4, 1, 4, -10, -50, 32, 21]) ? 82
// Smallest number is -50, biggest is 32.

differenceMaxMin([44, 32, 86, 19]) ? 67
// Smallest number is 19, biggest is 86.
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int differenceMaxMin(vector<int> a) {
	int min=a[0],max=a[0];
	for(int x:a){
		if(x>max) max=x;
		if(x<min) min=x;
	}
	return max-min;
}

/*
Solution 2:
int differenceMaxMin(vector<int> arr) {
	sort(arr.begin(), arr.end());
	return arr.back() - arr.front();
}

*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
