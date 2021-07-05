/*
Source: Edabit
Link : https://edabit.com/challenge/oZNe3pGqPocNrDPj4
Date: 07/02/2021

Odd Up, Even Down
=====================

Create a function that goes through the array, incrementing (+1) for each odd-valued number and decrementing (-1) for each even-valued number.

Examples
transform([1, 2, 3, 4, 5]) ? [2, 1, 4, 3, 6]

transform([3, 3, 4, 3]) ? [4, 4, 3, 4]

transform([2, 2, 0, 8, 10]) ? [1, 1, -1, 7, 9]
Notes
N/A
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> transform(vector<int> a) {
	for(int &x:a){
		if(x&1) x=x+1;
		else  x=x-1;;
	}
	return a;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
