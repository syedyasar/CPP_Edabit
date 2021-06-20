/*
Source: Edabit
Link : https://edabit.com/challenge/GepGyEAk4R3A5gfKb
Date: 06/19/2021


Outlier Number
==================

Given an array of either entirely odd integers or entirely even integers except for a single Outlier Number. Create a function to return this number.

Examples
outlierNumber([2, 3, 4]) ? 3
// 2 and 4 are even numbers.
// 3 is an outlier number.

outlierNumber([1, 2, 3]) ? 2

outlierNumber([4, 1, 3, 5, 9]) ? 4
Notes
Array size will always be >=3.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;

int outlierNumber(vector<int> a) {
	int odd[2]={0,0};
	int even[2]={0,0};
	for(int i=0; i<a.size(); i++){
		if(a[i]%2==0){even[0]++ ; even[1]=a[i] ;}
		else{	odd[0]++;   odd[1] = a[i];	}
		}
	  if(even[0]==1) return even[1];
	  else if(odd[1]==1) return even[1];
}



/*
outlierNumber([2, 3, 4]) 
? 3

outlierNumber([1, 2, 3]) 
? 2

outlierNumber([4, 1, 3, 5, 9]) 
? 4

*/
