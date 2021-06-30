/*
Source: Edabit
Link : https://edabit.com/challenge/zufAYrACJdYd68Phv
Date: 06/29/2021


Get the Sum of All Vector Elements
====================================

Create a function that takes a vector and returns the sum of all numbers in the vector.

Examples
get_sum_of_elements({2, 7, 4}) ? 13

get_sum_of_elements({45, 3, 0}) ? 48

get_sum_of_elements({-2, 84, 23}) ? 105
Notes
Use an iterator if possible.

*/

#include <iostream>
#include<vector>
using namespace std;
int get_sum_of_elements(vector<int> arr) {
	int sum=0;
	for(auto x:arr)	sum+=x;
	return sum;
}

int main(){
	cout <<  get_sum_of_elements({2, 7, 4})  << endl ;
	cout <<  get_sum_of_elements({45, 3, 0}) << endl ;
	cout <<  get_sum_of_elements({-2, 84, 23})   << endl ;
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

get_sum_of_elements({2, 7, 4}) ? 13

get_sum_of_elements({45, 3, 0}) ? 48

get_sum_of_elements({-2, 84, 23}) ? 105
Notes
*/
