/*
Source: Edabit
Link : https://edabit.com/challenge/Bm8Ev62JkrWWciypH
Date: 07/02/2021

Reverse an Array
===================

Write a function to reverse an array.

Examples
reverse([1, 2, 3, 4]) ? [4, 3, 2, 1]

reverse([9, 9, 2, 3, 4]) ? [4, 3, 2, 9, 9]

reverse([]) ? []
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> a) {
	int l=a.size() , t;
	for(int i=0; i<l/2; i++) {	t=a[i];	a[i]= a[l-i-1];	a[l-i-1]=t;	}
	return a;
}

/*
Solution 2:
std::vector<int> reverse(std::vector<int> arr) {
	std::reverse(arr.begin(), arr.end());
	return arr;
}

*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
