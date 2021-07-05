/*
Source: Edabit
Link : https://edabit.com/challenge/2GHTu8MQds57SiYEv
Date: 07/02/2021

Return the Index of the First Vowel
====================================

Create a function that returns the index of the first vowel in a string.

Examples
firstVowel("apple") ? 0

firstVowel("hello") ? 1

firstVowel("STRAWBERRY") ? 3

firstVowel("pInEaPPLe") ? 1
Notes
Input will be single words.
Characters in words will be upper or lower case.
"y" is not considered a vowel.
Input always contains a vowel.

*/

#include<iostream>
#include<vector>
using namespace std;
int firstVowel(string s) {
	char t;
	for(int i=0;s[i]!='\0';i++){
		t=tolower(s[i]);
		if(t=='a'  || t=='e'  || t=='i'  || t=='o'  || t=='u'  )
			return i;
	}
 return -1;
}

/*
Solution 2: 

using namespace std;
int firstVowel(string s) {
return s.find_first_of("aeiouAEIOU");
}


*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
