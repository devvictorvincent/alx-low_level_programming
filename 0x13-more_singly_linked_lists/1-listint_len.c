#include "lists.h"

/**
 * listint_len - returns the number of elements stored in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t mynum = 0;

	while (h)
	{
		mynum++;
		h = h->next;
	}

	return (mynum);
}
