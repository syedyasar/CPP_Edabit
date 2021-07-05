/*
Source: Edabit
Link : https://edabit.com/challenge/8NQyQeuLCyjchjPkD
Date: 07/04/2021

End Corona!
==============


Create a function that takes the number of activeCases, daily average recovered cases and daily average newCases and calculates the number of days it will take to reach zero cases.

Examples
endCorona(4000, 2000, 77000) ? 39

endCorona(3000, 2000, 50699) ? 51

endCorona(30000, 25000, 390205) ? 79
Notes
The number of people who recover per day recovers will always be greater than daily newCases.
Be conservative and round up the number of days needed.
*/




int endCorona(int recovers, int newCases, int activeCases) {
	return activeCases/(recovers - newCases)+1;
}


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
