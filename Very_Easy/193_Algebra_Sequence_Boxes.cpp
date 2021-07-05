/*
Source: Edabit
Link : https://edabit.com/challenge/Z9whynrGXuyRjiuK9
Date: 07/04/2021

Algebra Sequence — Boxes
===========================

Create a function that takes a number (step) as an argument and returns the amount of boxes in that step of the sequence.

Box Sequence Image

Step 0: Start with 0
Step 1: Add 3
Step 2: Subtract 1
Repeat Step 1 & 2 ...
Examples
boxSeq(0) ? 0

boxSeq(1) ? 3

boxSeq(2) ? 2
Notes
Step (the input) is always a positive integer (or zero).

*/

#include<iostream>
int boxSeq(int n) {
	return (n&1)?n+2:n;
}
/*
Solution 2:


*/

/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
