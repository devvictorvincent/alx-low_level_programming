#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char i;
	char u;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (u = 'A' ; u <= 'A' ; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
