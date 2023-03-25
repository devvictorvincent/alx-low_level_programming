#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - main function
 *
 *
 * Return: 0 if not upper case, if upper case
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');

	}
}
