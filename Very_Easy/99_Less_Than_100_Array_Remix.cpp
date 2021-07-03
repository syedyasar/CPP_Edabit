/*
Source: Edabit
Link : https://edabit.com/challenge/B9ToNAAzEpGEhtkon
Date: 06/30/2021

Less Than 100 Array Remix
============================


Given an array of numbers, return true if the sum of the array is less than 100; otherwise return false.

Examples
arrayLessThan100([5, 57]) ? true

arrayLessThan100([77, 30]) ? false

arrayLessThan100([0]) ? true
Notes
N/A

*/

#include<iostream>
#include<vector>

using namespace std;

/*

#include <numeric>
using namespace std;
bool arrayLessThan100(vector<int> a) {
	return accumulate(a.begin(), a.end(),0) <100 ;
}

*/


bool arrayLessThan100(vector<int> a) {
	int s=0;
	for(int i=0;i<a.size();i++) s+=a[i];
	return s<100 ? 1 : 0;
}


int main(){
	cout << arrayLessThan100({5, 57})    << endl;
	cout << arrayLessThan100({77, 30})    << endl;	
	cout << arrayLessThan100({0})   << endl;	
	
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

arrayLessThan100([5, 57]) ? true

arrayLessThan100([77, 30]) ? false

arrayLessThan100([0]) ? true

*/
