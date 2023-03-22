#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - main function
 *
 * print_alphabet - function that prints alphabets in lower case
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
