/*
Source: Edabit
Link : https://edabit.com/challenge/Ef44wkYGByu8TahJL
Date: 07/02/2021

Find Unique Positive Numbers from Array
=========================================

Write a function that takes an array and returns a new array with unique positive (more than 0) numbers.

Examples
uniqueArr([-5, 1, -7, -5, -2, 3, 3, -5, -1, -1]) ? [1, 3]

uniqueArr([3, -3, -3, 5, 5, -6, -2, -4, -1, 3]) ? [3, 5]

uniqueArr([10, 6, -12, 13, 5, 5, 13, 6, 5]) ? [10, 6, 13, 5]
Notes
Return the elements in the order that they are found in the array.
Your function should also work for empty arrays.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> uniqueArr(vector<int> a) {
	vector<int> b;
	for(int x:a)
		if(x>0) b.push_back(x);
 for(int i=0;i<b.size();i++){
	 for(int j=0;j<b.size();j++)
		 if(i!=j && b[i]==b[j])	b.erase(b.begin()+j);
 }
	return b;
}
/*
Solution 2:
std::vector<int> uniqueArr(std::vector<int> arr) {
	std::vector<int> a; int f;
	for (int x: arr){
		if(x > 0){
			f = 0;
			for (int y: a){
				if(x == y){
					f = 1;
					break;
				}
			}
			if (f == 0)
				a.push_back(x);
		}
	}
	return a;
}

*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
