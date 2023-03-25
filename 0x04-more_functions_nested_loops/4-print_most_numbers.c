#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - main function
 *
 *
 * Return: 0 if not upper case, if upper case
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
