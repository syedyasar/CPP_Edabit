/*
Source: Edabit
Link : https://edabit.com/challenge/oZah9AKfpy6vrvj9C
Date: 06/29/2021

Maximum Weight Allowed
========================

Create a function that returns true if the combined weight of a car car and the weight of the passengers p in the car is less than the maximum weight maxWeight the car is allowed to carry. Otherwise, return false. The weight of the car and the weight of the passengers are given in pounds. The maximum weight is given in kilograms.

Examples
weightAllowed(3000, [150, 201, 75, 88, 195], 1700) ? true

weightAllowed(3200, [220, 101, 115, 228, 15], 1700) ? false

weightAllowed(2900, [225, 171, 300, 274, 191], 1850) ? true
Notes
1 pound = 0.453592 kilogram
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool weightAllowed(int car, vector<int> p, int maxWeight) {
	int sum=0;
	for(auto x: p) sum+=x;
	return  (car+sum)*0.453592 < maxWeight;
}

int main(){
	cout << weightAllowed(3000, {150, 201, 75, 88, 195}, 1700)  << endl;
	cout << weightAllowed(3200, {220, 101, 115, 228, 15}, 1700)  << endl;	
	cout << weightAllowed(2900, {225, 171, 300, 274, 191}, 1850) << endl;	
	return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

weightAllowed(3000, [150, 201, 75, 88, 195], 1700) ? true

weightAllowed(3200, [220, 101, 115, 228, 15], 1700) ? false

weightAllowed(2900, [225, 171, 300, 274, 191], 1850) ? true
Notes

*/
