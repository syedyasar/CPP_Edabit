/*
Source: Edabit
Link :  https://edabit.com/challenge/oGaTdex6MLXfFeraK
Date: 06/19/2021


Similar Bread
===============

Given two arrays, which represent two sandwiches, return whether both sandwiches use the same type of bread. The bread will always be found at the start and end of the array.

Examples
hasSameBread(
  ["white bread", "lettuce", "white bread"],
  ["white bread", "tomato", "white bread"]
) ? true

hasSameBread(
  ["brown bread", "chicken", "brown bread"],
  ["white bread", "chicken", "white bread"]
) ? false

hasSameBread(
  ["toast", "cheese", "toast"],
  ["brown bread", "cheese", "toast"]
) ? false
Notes
The arrays will always be three elements long.
The first piece of bread on one sandwich must be the same as the first piece of bread on the other sandwich. The same goes for the last piece of bread.
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;
bool hasSameBread(vector<string> a, vector<string> b) {
	return (!a[0].compare(b[0]) && !a[2].compare(b[2])  ) ;
}

/*
filterString("^^Edabit^^%$#12379") ? [1, 5, 5, 7]

filterString("**Airforce1**") ? [1, 7, 1, 4]

*/
