/*
Source: Edabit
Link :  https://edabit.com/challenge/CS66RDr865vJDqBCu
Date: 06/19/2021


Filter a String
================

Mubashir needs your help to count uppercase letters, lowercase letters, numbers and special characters in a given string.

Create a function which takes a string txt and returns a list of numbers with count of uppercase letters, lowercase letters, numbers and special characters.

Examples
filterString("*$(#Mu12bas43hiR%@*!") ? [2, 6, 4, 8]
// 2 uppercase letters
// 6 lowercase letters
// 4 numbers
// 8 special characters

filterString("^^Edabit^^%$#12379") ? [1, 5, 5, 7]

filterString("**Airforce1**") ? [1, 7, 1, 4]
Notes
N/A


N/A

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> filterString(string txt) {
	vector<int> a;
	for(int i=0; txt[i]!='\0'; i++){
		if(islower(txt[i])) a[0]++;
    else if(isupper(txt[i])) a[1]++;		
    else if(isdigit(txt[i])) a[2]++;			
		else a[3]++;
		return a;
	}
}


/*
filterString("^^Edabit^^%$#12379") ? [1, 5, 5, 7]

filterString("**Airforce1**") ? [1, 7, 1, 4]

*/
