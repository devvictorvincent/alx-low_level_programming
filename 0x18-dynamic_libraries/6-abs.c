#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs - main function
 *
 * @a: parameter to be checking
 *
 * _putchar: prints alphabets
 *
 * Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
