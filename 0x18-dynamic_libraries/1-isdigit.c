#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isdigit - main function
 *
 * @c: parameter of ben sent
 *
 * Return: 0 if not upper case, if upper case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
