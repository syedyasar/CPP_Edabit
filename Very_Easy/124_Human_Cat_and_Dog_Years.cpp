/*
Source: Edabit
Link : https://edabit.com/challenge/BahnXWqYk9cHPAu8F
Date: 07/02/2021

Human, Cat and Dog Years ????????
====================================

Mubashir has a cat and a dog. He purchased both of them at the same time humanYears ago.

Create a function which takes an argument of humanYears and returns [humanYears, catYears, dogYears] array.

Human Years
Human Years >= 1
Human Years are whole numbers only.
Cat Years
15 cat years for first year.
+9 cat years for second year.
+4 cat years for each year after that.
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
Examples
calculateYears(1) ? [1, 15, 15]

calculateYears(2) ? [2, 24, 24]

calculateYears(10) ? [10, 56, 64]
Notes
N/A

*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
vector<int> calculateYears(int h) {
	int c,d;
	vector<int> a;
	if(h==1){ c=d=15;}
	else if(h==2){c=d=24;}
	else{c=24+(h-2)*4;d=24+(h-2)*5 ;}
	a.push_back(h);a.push_back(c);a.push_back(d);
	return a;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

Describe(calculateYears_){
It(test1){Assert::That(calculateYears(1), Equals(std::vector<int>{1,15,15}));}
It(test2){Assert::That(calculateYears(2), Equals(std::vector<int>{2,24,24}));}
It(test3){Assert::That(calculateYears(10), Equals(std::vector<int>{10,56,64}));}
It(test4){Assert::That(calculateYears(20), Equals(std::vector<int>{20,96,114}));}
It(test5){Assert::That(calculateYears(65), Equals(std::vector<int>{65,276,339}));}
It(test6){Assert::That(calculateYears(43), Equals(std::vector<int>{43,188,229}));}
It(test7){Assert::That(calculateYears(100), Equals(std::vector<int>{100,416,514}));}
};
*/
