#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * positive_or_negative - main function
 *
 *@i: prints possitive or printer wants
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
