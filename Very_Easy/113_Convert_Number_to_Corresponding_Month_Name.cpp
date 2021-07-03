/*
Source: Edabit
Link :  https://edabit.com/challenge/etf3rWHeJfxkimTZk
Date: 07/01/2021

Convert Number to Corresponding Month Name
============================================

Create a function that takes a number (from 1 to 12) and returns its corresponding month name as a string. For example, if you're given 3 as input, your function should return "March", because March is the 3rd month.

Number	Month Name
1	January
2	February
3	March
4	April
5	May
6	June
7	July
8	August
9	September
10	October
11	November
12	December
Examples
monthName(3) ? "March"

monthName(12) ? "December"

monthName(6) ? "June"
Notes
You can expect only integers ranging from 1 to 12 as test input.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string monthName(int n) {
	string month[12] ={"January","February","March","April", "May" , "June" ,
										 "July", "August" , "September", "October", "November", "December"};
	return month[n-1];
}


int main() {
	cout << monthName(3) << endl;
	cout << monthName(12)   << endl;
	cout << monthName(6)  << endl;	
    return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

monthName(3) ? "March"

monthName(12) ? "December"

monthName(6) ? "June"

*/
