#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - main function
 *
 * @n: int parameter
 *
 *
 * Return: 0 if not upper case, if upper case
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
