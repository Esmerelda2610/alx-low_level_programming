#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to first elements in linked list
 *
 * Return: The data inside elements that was deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (-head)->next;
	free(*head);
	*head = temp;

	return (count);

}
