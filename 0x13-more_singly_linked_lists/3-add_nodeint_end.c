#include "lists.h"

/**
 * add_nodeint_end - inputs node after a linked list
 * @head: always pointer towards the first element on the list
 * @n: contains all data inputs to insert in the new element
 *
 * Return: always pointer towards the new node,or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

