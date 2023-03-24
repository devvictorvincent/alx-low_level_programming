#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isupper - main function
 *
 * @c: parameter of ben sent
 *
 * Return: 0 if not upper case, if upper case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
