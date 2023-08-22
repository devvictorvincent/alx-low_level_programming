#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - main function
 *
 * @c: parameters for looking at all alphabets
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
