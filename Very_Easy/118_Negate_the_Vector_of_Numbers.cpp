/*
Source: Edabit
Link :  https://edabit.com/challenge/4njk7rAASLSQx6Mb5
Date: 07/01/2021

Negate the Vector of Numbers
==============================

Given a vector of numbers, negate all elements contained within.

Negating a positive value -+n will return -n, because all +'s are removed.
Negating a negative value --n will return n, because the first - turns the second minus into a +.
Examples
negate({1, 2, 3, 4}) ? {-1, -2, -3, -4}

negate({-1, 2, -3, 4}) ? {1, -2, 3, -4}

negate({}) ? {}
Notes
If you get an empty vector, return an empty vector: {}
*/

#include<iostream>
#include<vector>
#include<cmath>


std::vector<int> negate(std::vector<int> vi) {
		if(!vi.size()) return {};
	for(int i=0;i<vi.size();i++) {vi[i]*=-1;}
	return vi;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

negate({1, 2, 3, 4}) ? {-1, -2, -3, -4}

negate({-1, 2, -3, 4}) ? {1, -2, 3, -4}

negate({}) ? {}
*/
