/*
Source: Edabit
Link : https://edabit.com/challenge/rcDedvCKyineLsNfC
Date: 06/20/2021

Arithmetic Progression
========================

In mathematics, an Arithmetic Progression (AP) is a sequence of numbers such that the difference between the consecutive terms is constant. Create a function that takes three arguments:

The first element of the sequence first
Constant difference between the elements diff
Total numbers in the sequence n
Return the first n elements of the sequence with the given common difference diff. Final result should be a string of numbers, separated by comma and space.

Examples
arithmeticProgression(1, 2, 5) ? "1, 3, 5, 7, 9"

arithmeticProgression(1, 0, 5) ? "1, 1, 1, 1, 1"

arithmeticProgression(1, -3, 10) ? "1, -2, -5, -8, -11, -14, -17, -20, -23, -26"
Notes
N/A

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
using namespace std;

string arithmeticProgression(int start, int diff, int n) {
	string ap=to_string(start);
	int p=start;
	for(int i=2;i<=n;i++){
		p+=diff;
		ap=ap+", " + to_string(p);
	}
	return ap;
}
int main(){
  cout << arithmeticProgression(1, 2, 5)   << endl;
  cout << arithmeticProgression(1, 0, 5)   << endl; 
  cout << arithmeticProgression(1, -3, 10) << endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

arithmeticProgression(1, 2, 5) ? "1, 3, 5, 7, 9"

arithmeticProgression(1, 0, 5) ? "1, 1, 1, 1, 1"

arithmeticProgression(1, -3, 10) ? "1, -2, -5, -8, -11, -14, -17, -20, -23, -26"

*/
