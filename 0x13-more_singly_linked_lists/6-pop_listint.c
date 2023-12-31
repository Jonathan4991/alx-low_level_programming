#include "lists.h"

/**
 * pop_listint - to delete head node of linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: always returns data in the elements deleted,
 * or 0 for an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

