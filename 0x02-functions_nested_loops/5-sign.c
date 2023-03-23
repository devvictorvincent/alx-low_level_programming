#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign - main function
 *
 * @n: parameter to be passed to thr function
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}

}
