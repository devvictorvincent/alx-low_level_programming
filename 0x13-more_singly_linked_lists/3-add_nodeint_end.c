#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the first element in the linked list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *temp = *head;

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
		return (NULL);

	newlist->n = n;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newlist;

	return (newlist);
}
