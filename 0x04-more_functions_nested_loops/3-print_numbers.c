#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers - main function
 *
 *
 * Return: 0 if not upper case, if upper case
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
