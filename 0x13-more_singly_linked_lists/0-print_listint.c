#include "lists.h"

/**
 * print_listint - prints all the elements in a given list
 * @h: linked list of type listint_t to be `print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t mynum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		mynum++;
		h = h->next;
	}

	return (mynum);
}
