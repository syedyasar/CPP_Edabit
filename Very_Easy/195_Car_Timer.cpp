/*
Source: Edabit
Link : https://edabit.com/challenge/yscYC6k8SdHomxgEr
Date: 07/05/2021

Car Timer ???
===============

A built-in timer inside your car can count the length of your ride in minutes and you have started your ride at 00:00.

Given the number of minutes n at the end of the ride, calculate the current time. Return the sum of digits that the digital timer in the format hh:mm will show at the end of the ride.

Examples
carTimer(240) ? 4
// 240 minutes have passed since 00:00, the current time is 04:00
// Digits sum up is 0 + 4 + 0 + 0 = 4

carTimer(808) ? 14

carTimer(14) ? 5
Notes
N/A

*/

int carTimer(int n) {
	int h= n/60;
	int m = n%60;
	int count=0;
	while(h){count+=h%10;  h/=10;}
	while(m){count+=m%10;  m/=10;}
	return count;
}

/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
