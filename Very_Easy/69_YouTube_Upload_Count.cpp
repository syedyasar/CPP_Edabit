/*
Source: Edabit
Link : https://edabit.com/challenge/L2Dwcchmg8rCmyxMh
Date: 06/29/2021


YouTube Upload Count
======================

You are given an array of dates in the format Dec 11 and a monthin the format Dec as arguments. Each date represents a video that was uploaded on that day. Return the number of uploads for a given month.

Examples
uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Sept") ? 2

uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Oct") ? 1
Notes
If you only pay attention to the month and ignore the day, the challenge will become easier.

*/

#include <iostream>
#include<vector>
using namespace std;
int uploadCount(vector<string> dates, string month) {
	int count =0;
	for(int i=0;i<dates.size();i++){
		if(dates[i].substr(0,2)==month.substr(0,2)) count++;
	}
	return count;
}

int main(){
	cout << uploadCount({"Sept 22", "Sept 21", "Oct 15"}, "Sept")   << endl ;
	cout << uploadCount({"Sept 22", "Sept 21", "Oct 15"}, "Oct")  << endl ;
	return 0;
}



/*

Online Compiler : https://replit.com/languages/cpp?v2=1

uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Sept") ? 2

uploadCount(["Sept 22", "Sept 21", "Oct 15"], "Oct") ? 1

Notes

*/
