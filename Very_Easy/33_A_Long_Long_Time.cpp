/*
Source: Edabit
Link : https://edabit.com/challenge/NfHhRrBvYHe5Tagpb
Date: 06/19/2021

A Long Long Time
===================

Create a function that takes three values:

h hours
m minutes
s seconds
Return the value that's the longest duration.

Examples
longestTime(1, 59, 3598) ? 1

longestTime(2, 300, 15000) ? 300

longestTime(15, 955, 59400) ? 59400
Notes
No two durations will be the same.
*/

#include <iostream>
//#include <string>
//#include<vector>
//#include <algorithm>
using namespace std;
int longestTime(int h, int m, int s) {
	return ( h*3600>(m*60) && (h*3600>s) ) ? h : ( (m*60>s) ? m :s ) ;
}


int main(){
	cout << longestTime(1, 59, 3598)     << endl;
	cout << longestTime(2, 300, 15000)   << endl;
	cout << longestTime(15, 955, 59400)  << endl;
}

/*
longestTime(1, 59, 3598) ? 1

longestTime(2, 300, 15000) ? 300

longestTime(15, 955, 59400) ? 59400

*/
