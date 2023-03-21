#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int u;
	int n;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (n = 0 ; n < 10 ; n++)
			{
				for (u = 1 ; u < 10 ; )
				{
					if (i + j != u + n)
					{	
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(n + '0');
						putchar(u + '0');
						if (i + j + u + n != 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
