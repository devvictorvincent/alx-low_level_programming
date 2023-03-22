#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet - main function
 *
 * print_alphabet - function that prints alphabets in lower case
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
