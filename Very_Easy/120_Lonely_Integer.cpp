/*
Source: Edabit
Link : https://edabit.com/challenge/Fk2REaqji72jaPPMK
Date: 07/01/2021

Lonely Integer
===============

You are given an array of integers having both negative and positive values, except for one integer which can be negative or positive. Create a function to find out that integer.

Examples
lonelyInteger([1, -1, 2, -2, 3]) ? 3
// 3 has no matching negative appearance.

lonelyInteger([-3, 1, 2, 3, -1, -4, -2]) ? -4
// -4 has no matching positive appearance.

lonelyInteger([-9, -105, -9, -9, -9, -9, 105]) ? -9
Notes
N/A
*/

#include<iostream>
#include<vector>
#include<cmath>


using namespace std;
int lonelyInteger(vector<int> a) {
	vector<int> b;
	int c, f;
  for(int i=0;i<a.size();i++){
      c=0;
      for(int j=0;j<a.size();j++){
				if(a[i]==-a[j] && (i!=j) ) c=1;
			}
		if(!c) return a[i];
	}
	return a[a.size()-1];
}
int main(){
	
	cout << lonelyInteger({1,-1,2,-2,3})  << endl;
	cout << lonelyInteger({-3,1,2,3,-1,-4,-2})  << endl;	
	cout << lonelyInteger({1,-1,2,-2,3,3})  << endl;
	cout << lonelyInteger({-110,110,-38,-38,-62,62,-38,-38,-38})  << endl;	
	cout << lonelyInteger({-9,-105,-9,-9,-9,-9,105})  << endl;	
	return 0;
}
/*

Online Compiler : https://replit.com/languages/cpp?v2=1

It(test1){Assert::That(lonelyInteger({1,-1,2,-2,3}), Equals(3));}
	It(test2){Assert::That(lonelyInteger({-3,1,2,3,-1,-4,-2}), Equals(-4));}
	It(test3){Assert::That(lonelyInteger({1,-1,2,-2,3,3}), Equals(3));}
	It(test4){Assert::That(lonelyInteger({-110,110,-38,-38,-62,62,-38,-38,-38}), Equals(-38));}
	It(test5){Assert::That(lonelyInteger({-9,-105,-9,-9,-9,-9,105}), Equals(-9));}

*/
