/*
Source: Edabit
Link : https://edabit.com/challenge/3WAFxgHZLW2o2dxNS
Date: 07/01/2021

Find the Index (Part 1)
==========================

Create a function that finds the index of the first occurence of a given item.

Examples
search([1, 5, 3], 3) ? 2

search([1, 9, 9], 9) ? 1

search([1, 2, 3], 4) ? -1
Notes
If the item is not present, return -1.
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int search(vector<int> a, int i) {
	for(int j=0 ; j<a.size();j++ )
		if(i==a[j]) return j;
	return -1;
}

int main(){
	
	cout << search({1, 5, 3}, 5)  << endl;
	cout << search({9, 8, 3}, 3)<< endl;	
	cout << search({1, 2, 3}, 4) << endl;
	cout << search({1, 5, 3, 10, 17, 20, -6}, 20)  << endl;	
	return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(search_tests) {
	It(test1){Assert::That(search({1, 5, 3}, 5), Equals(1));}
	It(test2){Assert::That(search({9, 8, 3}, 3), Equals(2));}
	It(test3){Assert::That(search({1, 2, 3}, 4), Equals(-1));}
	It(test4){Assert::That(search({1, 5, 3, 10, 17, 20, -6}, 20), Equals(5));}
	It(test5){Assert::That(search({1, 1, 1}, 1), Equals(0));}
};
*/
