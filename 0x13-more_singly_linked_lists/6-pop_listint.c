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

	listint_t *temp = *head;
	int num;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	num = temp->n;

	free(temp);
	return (num);
}
