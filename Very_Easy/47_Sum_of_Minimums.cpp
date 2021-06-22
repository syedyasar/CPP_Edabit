/*
Source: Edabit
Link : https://edabit.com/challenge/P7eFmNHAkTXF5B962
Date: 06/20/2021


Sum of Minimums
=================


Create a function that takes a 2D array arr returns the sum of the minimum value in each row.

Examples
sumMinimums([
  [1, 2, 3, 4, 5],
  [5, 6, 7, 8, 9],
  [20, 21, 34, 56, 100]
] ? 26

// minimum value of the first row is 1
// minimum value of the second row is 5
// minimum value of the third row is 20
Notes
N/A
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;
int sumMinimums(vector<vector<int>> a) {
	int sum=0;
	for(int i=0;i<a.size();i++){
		int k=a[i][0];
		for(int j=1; j<a[i].size();j++){
			if(a[i][j]<k)	
					k=a[i][j];
		}
		sum+=k;
	}
	return sum;
}


int main(){
  cout << sumMinimums({  {1, 2, 3, 4, 5}, {5, 6, 7, 8, 9}, {20, 21, 34, 56, 100} } )<< endl;
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

sumMinimums([
  [1, 2, 3, 4, 5],
  [5, 6, 7, 8, 9],
  [20, 21, 34, 56, 100]
] ? 26
*/
