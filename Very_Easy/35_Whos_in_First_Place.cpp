/*
Source: Edabit
Link : https://edabit.com/challenge/CYrMGHFN3bfbAnZgJ
Date: 06/19/2021

Who's in First Place?
=======================

Create a function that takes a string road and returns the car that's in first place. The road will be made of "=", and cars will be represented by letters in the alphabet.

Examples
firstPlace("====b===O===e===U=A==") ? "A"

firstPlace("e==B=Fe") ? "e"

firstPlace("proeNeoOJGnfl") ? "l"
Notes
Return "0" if there is no car on the road and "0" if there is no road.

*/

#include <iostream>
//#include <string>
//#include<vector>
//#include <algorithm>
using namespace std;
char firstPlace(string road) {
	for(int i=road.length()-1;i>=0;i--){
		if(isalpha(road[i]))		 return road[i];
	}
  return '0';	 
}

int main(){
	cout << firstPlace("====b===O===e===U=A==")  << endl;
	cout << firstPlace("e==B=Fe")  << endl;
	cout << firstPlace("proeNeoOJGnfl")  << endl;
}

/*
firstPlace("====b===O===e===U=A==") ? "A"

firstPlace("e==B=Fe") ? "e"

firstPlace("proeNeoOJGnfl") ? "l"

*/
