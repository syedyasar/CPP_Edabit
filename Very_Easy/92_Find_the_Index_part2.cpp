/*
Source: Edabit
Link : https://edabit.com/challenge/b7tL9qTimbBLW8ZL4
Date: 06/30/2021

Find the Index (Part #2)
===========================

Create a function that searches for the index of a given item in an array. If the item is present, it should return the index, otherwise, it should return -1.

Examples
search([1, 2, 3, 4], 3) ? 2

search([2, 4, 6, 8, 10], 8) ? 3

search([1, 3, 5, 7, 9], 11) ? -1
Notes
If the item is not present, return -1.
The given array is ordered.


*/

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;
int search(vector<int> a, int i) {
	for(int j=0;j<a.size();j++){
		if(a[j]==i) return j;
	}
	return -1;
}


int main(){
    cout << search({1, 2, 3, 4}, 3)       << endl;
	cout << search({2, 4, 6, 8, 10}, 8)   << endl;	
	cout << search({1, 3, 5, 7, 9}, 11)   << endl;		
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

search([1, 2, 3, 4], 3) ? 2

search([2, 4, 6, 8, 10], 8) ? 3

search([1, 3, 5, 7, 9], 11) ? -1

Notes

*/
