/*
Source: Edabit
Link : https://edabit.com/challenge/kBvwrrAq5aEeYaAGw
Date: 06/20/2021

Convert Yen to USD
====================

Create a function that can turn Yen (Japanese dollar) to USD (American dollar).

Examples
yenToUsd(1) ? 0.01

yenToUsd(500) ? 4.65

yenToUsd(649) ? 6.04
Notes
Each Yen to USD conversion is Yen / 107.5
Round the result to two decimal places.

*/

#include <iostream>
#include <string>
#include<vector>
#include <algorithm> 
#include<cmath>
using namespace std;


double yenToUsd(int yen) {
	int t=round(100*yen/107.5);
	return (double)(t )/100;
}

int main(){
  cout << yenToUsd(1)  << endl;
  cout << yenToUsd(500)  << endl; 
  cout << yenToUsd(649) << endl; 
  return 0;
}

/*

Online Compiler : https://replit.com/languages/cpp?v2=1

yenToUsd(1) ? 0.01

yenToUsd(500) ? 4.65

yenToUsd(649) ? 6.04

*/
