#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: pointer to first element in list
 * @n: data to insert in new element
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *hed;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next = new;

	return (new);

}

