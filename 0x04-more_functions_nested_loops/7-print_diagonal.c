#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal - main function
 *
 * @n: parameter of int
 *
 *
 * Return: 0 if not upper case, if upper case
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
