#include "lists.h"

/**
 * sum_listint - set to find sum of the data in a listint_t list
 * @head: always first node in linked list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

