#include "lists.h"

/**
 * get_nodeint_at_index - to returnsnode at a certain index of a linked list
 * @head: the first node of a linked list
 * @index: the index of node to return
 *
 * Return: pointer towards node of interest,or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

