#include "lists.h"

/**
 * pop_listint - will delete the head node of a linked list
 * @head: the pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int mynum;

	if (!head || !*head)
		return (0);

	mynum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (mynum);
}
