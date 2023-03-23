#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower - main function
 *
 * @c: parameter to be printed
 *
 * _putchar: prints alphabets
 *
 * Return: prints 1 if lower case or 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
