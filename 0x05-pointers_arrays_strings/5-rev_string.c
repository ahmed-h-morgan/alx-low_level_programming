#include "main.h"

/**
 * rev_string - a function that reverses a string in the same place
 * @s: the string
 * Return: a reversed string
*/
void rev_string(char *s)
{
	char temp = s[0];
	int counter = 0;
	int i;

	/* the below function count the length of the string*/
	/* (it checks if the value of the char pointer equal to null) */
	/* (it increase the len of string by 1 )*/
	/* (it loops till it found null then stop) */
	while (s[counter] != '\0')
	{
		counter++;
	}

	/* the below function is for the revers */
	/* (the idea here is to swap between every 2 chars in the string ) */
	/* (we catch the first char in the string)*/
	/* (and swap its value with the value of last char) */
	/* (then we move to the next 2 chars )*/
	/* (which are the next char in the string)*/
	/* (and the char before the last one and swap them) */
	/* (HOW ??) */
	/* we use a temp variable to swap between two chars*/
	/* then we move to the next two chars */
	/* (we move between two pairs of char by using the counter*/
	/* (which is length of string) as an index of char in the sting) */
	/* (then we decrement the amount of it by 1 in each round of loop ) */
	/* (then reuse it as index of the last char in the str we want to swap ) */
	/* (the i variable here incrementing by 1 in each round */
	/* to catch the first chars in the string ) */
	/* (the loop will continue till the count of i (which is increasing) */
	/* be equal to (meet) the counter (which is decreasing)*/
	/* and reach the (mid point) of the string) */
	for (i = 0; i < counter; i++)
	{
		counter--;
		temp = s[i];
		s[i] = s[counter];
		s[counter] = temp;
	}
}
