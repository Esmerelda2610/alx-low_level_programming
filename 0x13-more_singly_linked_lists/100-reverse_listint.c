#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);

		return (1);
	}

	for (i = 0; (i < index - 1 && temp != NULL); i++)
	{
		temp = temp->next;
	}

	if (i != (index - 1) || temp->next == NULL)
		return (-1);
	/* make the prvious node points to the next one after delete */
	temp2 = temp->next;
	temp->next = temp->next->next;
	free(temp2);

	return (1);

}
