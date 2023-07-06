#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the given list
 * @head: pointer to the first node in the linked list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lnew;

	lnew = malloc(sizeof(listint_t));
	if (!lnew)
		return (NULL);

	lnew->n = n;
	lnew->next = *head;
	*head = lnew;

	return (lnew);
}
