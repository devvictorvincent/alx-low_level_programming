#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - main function
 *
 * @a:parameter for function
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
