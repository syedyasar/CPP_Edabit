/*
Source: Edabit
Link : https://edabit.com/challenge/5MLiWEQqEQtHNuN38
Date: 06/20/2021


Trimmed Averages
==================

Given an array of numbers, remove the largest and smallest numbers, and calculate the average of the remaining numbers.

Examples
trimmedAverages([4, 5, 7, 100]) ? 6
// Average of 5 and 7

trimmedAverages([10, 25, 5, 15, 20]) ? 15
// Average of 10, 15 and 20

trimmedAverages([1, 1, 1]) ? 1
// 1
Notes
Round to the nearest whole number.
Array size is greater than 2.
*/


#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;

/* Solution 1 :

int trimmedAverages(vector<int> a) {
  sort(a.begin(), a.end())  ;
  int sum=0;
  for(int i=1;i<a.size()-1;i++)
    sum+=a[i];
  
    return sum/(a.size()-2);
}

*/

int trimmedAverages(vector<int> a) {
	int max=a[0],min=a[0],sum=0;;
	for(int i=0;i<a.size();i++){
		sum+=a[i];
		if(a[i]<min) min=a[i];
		else if(a[i]>max) max = a[i];
	}
	return (sum-max-min)/(a.size() -2);
}

int main(){
  cout << trimmedAverages({4, 5, 7, 100})<< endl;
  return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

trimmedAverages([4, 5, 7, 100]) ? 6
// Average of 5 and 7

trimmedAverages([10, 25, 5, 15, 20]) ? 15
// Average of 10, 15 and 20

trimmedAverages([1, 1, 1]) ? 1
*/
