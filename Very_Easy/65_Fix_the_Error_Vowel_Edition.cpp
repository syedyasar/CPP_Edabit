/*
Source: Edabit
Link : https://edabit.com/challenge/Cn9RQXekfjzZMNwuX
Date: 06/29/2021


Fix the Error: Vowel Edition
===============================

Your friend is trying to write a function that removes all vowels from a string. They write:

std::string removeVowels(std::string text) {
  std::regex vowels("[aiou]");
  std::stringstream result;
  std::regex_replace(std::ostream_iterator<char>(result), text.begin(), text.end(), vowels, "");
  return result.str();
}
However, it seems that it doesn't work? Fix your friend's code so that it actually does remove all vowels.

Examples
removeVowels("candy") ? "cndy"

removeVowels("hello") ? "hell"
// The "o" is removed, but the "e" is still there!

removeVowels("apple") ? "pple"
Notes
All letters will be lowercase.

*/


using namespace std;
// Fix this incorrect code, so that all tests pass!

#include <regex>
#include <sstream>
#include <string>
string removeVowels(string text) {
  regex vowels("[aeiou]");
  stringstream result;
  regex_replace(ostream_iterator<char>(result), text.begin(), text.end(), vowels, "");
  return result.str();
}

int main(){
	cout <<  removeVowels("candy")  << endl ;
	cout <<  removeVowels("hello") << endl ;
	cout <<  removeVowels("apple") << endl ;
	return 0;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1

removeVowels("candy") ? "cndy"

removeVowels("hello") ? "hell"
// The "o" is removed, but the "e" is still there!

removeVowels("apple") ? "pple"

Notes
*/
