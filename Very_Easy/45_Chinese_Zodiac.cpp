/*
Source: Edabit
Link : https://edabit.com/challenge/RGyBcMBBoN4xDzETY
Date: 06/20/2021

Chinese Zodiac
=================

Create a function that takes a year as an argument and returns the corresponding Chinese zodiac.

Examples
chineseZodiac(2021) ? "Ox"

chineseZodiac(2020) ? "Rat"

chineseZodiac(1933) ? "Rooster"
Notes
The list of animals used can vary slightly, so check the Resources tab for the list that you will need for this challenge.
*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;
/*
string chineseZodiac(int birthYear) {
	string a[]={"Monkey","Rooster","Dog" ,"Pig" ,"Rat", "Ox" , "Tiger" , "Rabbit","Dragon" , "Snake" , "Horse" , "Sheep" };
	int t= birthYear % 12;
	return a[t];
}
*/

string chineseZodiac(int birthYear) {
	vector<string> a={"Monkey","Rooster","Dog" ,"Pig" ,"Rat", "Ox" , "Tiger" , "Rabbit","Dragon" , "Snake" , "Horse" , "Sheep" };
	int t= birthYear % 12;
	return a[t];
}



int main(){
  cout << chineseZodiac(2021)<< endl;
  cout << chineseZodiac(2020)<< endl; 
  cout << chineseZodiac(1933)<< endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

chineseZodiac(2021) ? "Ox"

chineseZodiac(2020) ? "Rat"

chineseZodiac(1933) ? "Rooster"

*/
