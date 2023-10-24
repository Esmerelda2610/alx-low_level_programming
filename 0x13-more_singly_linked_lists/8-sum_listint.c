#include "lists.h"

/**
 * sum_listint - calculate sum of all the data in a listint_t list
 * @head: first node in linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
