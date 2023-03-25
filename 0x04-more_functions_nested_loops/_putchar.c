#include <unistd.h>
/* betty style doc for function main goes there */
/**
 * _putchar - main function
 *
 * @c: parameter of ben sent
 *
 * Return: 0 if not upper case, if upper case
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
