/*
Source: Edabit
Link :  https://edabit.com/challenge/QcDeF47azy5bhPos6
Date: 06/19/2021



Index Multiplier
=================


Return the sum of all items in an array, where each item is multiplied by its index (zero-based). For empty arrays, return 0.

Examples
indexMultiplier([1, 2, 3, 4, 5]) ? 40
// (1*0 + 2*1 + 3*2 + 4*3 + 5*4)

indexMultiplier([-3, 0, 8, -6]) ? -2
// (-3*0 + 0*1 + 8*2 + -6*3)
Notes
All items in the array will be integers.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

using namespace std;
int indexMultiplier(vector<int> a){
	int s=0;
	for(int i=1;i<a.size();i++)
		s+= a[i]*i;
	
  return s;
}	

/*
indexMultiplier([1, 2, 3, 4, 5])
 ? 40
// (1*0 + 2*1 + 3*2 + 4*3 + 5*4)

indexMultiplier([-3, 0, 8, -6]) 
? -2
// (-3*0 + 0*1 + 8*2 + -6*3)

*/
