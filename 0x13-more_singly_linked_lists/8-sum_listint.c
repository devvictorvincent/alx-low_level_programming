#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum in output variable
 */
int sum_listint(listint_t *head)
{
	int output = 0;
	listint_t *temp = head;

	while (temp)
	{
		output += temp->n;
		temp = temp->next;
	}

	return (output);
}
