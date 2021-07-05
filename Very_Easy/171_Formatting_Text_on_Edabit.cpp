/*
Source: Edabit
Link : https://edabit.com/challenge/hHtdcAn7nszz9BnnB
Date: 07/03/2021

Formatting Text on Edabit
==========================

Edabit allows for markdown formatting, meaning that it's possible to format words by surrounding text with special characters. For example, to get bold text, you surround the text with double asterisks, like this **bold**.

Here is a list of the possible formatting options in Edabit and how to apply them:

**bold**
_italics_
`inline code`
~~strikethrough~~
Challenge
Given a string and a style character, return the newly formatted string. Style characters are single letters that represent the different types of formatting.

For the purposes of this challenge, the style characters are as follows:

"b" is for bold
"i" is for italics
"c" is for inline code
"s" is for strikethrough
Examples
mdFormat("Bold", "b") ? "**Bold**"

mdFormat("leaning text", "i") ? "_leaning text_"

mdFormat("Edabit", "c") ? "`Edabit`"

mdFormat("That's a strike!", "s") ? "~~That's a strike!~~"
Notes
Remember to format your comments!

*/

#include<iostream>
#include<vector>
using namespace std;
string mdFormat(string word, char style) {
	if(style=='b') return "**" + word + "**" ;
	else if(style=='i') return "_" + word + "_" ; 
	else if(style=='c') return "`" + word + "`" ; 
	else if(style=='s') return "~~" + word + "~~" ; 
}


*/


/*

Online Compiler : https://replit.com/languages/cpp?v2=1


*/
