/*
Source: Edabit
Link : https://edabit.com/challenge/4GZcWTiv2GPA9NfcP
Date: 06/19/2021


Return the Last Element in an Array
=====================================

Create a function that accepts an array of numbers and returns the last number in the array.

Examples
getLastItem([1, 2, 3], 3) ? 3

getLastItem([0], 1) ? 0

getLastItem([-1, -3], 2) ? -3
Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

int getLastItem(int a[], int l) {
	return a[l-1];
}

int main() {
 int a1[] ={1, 2, 3};
cout << " getLastItem(a1, 3) : " << 	getLastItem(a1, 3)<< endl; //3

 int a2[] ={0};
cout<<   " getLastItem(a2, 1) : " <<    getLastItem(a2, 1) << endl; // 0

 int a3[] ={-1, -3 };
cout <<   " getLastItem(a3, 2)  : "  <<    getLastItem(a3, 2)   << endl; // -3
return 0; 
}


/*
getLastItem([1, 2, 3], 3) ? 3

getLastItem([0], 1) ? 0

getLastItem([-1, -3], 2) ? -3
*/
