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

	listint_t *intNode, *temp;

	/* create new node */
	intNode = malloc(sizeof(listint_t));
	if (intNode == NULL)
		return (NULL);

	/* fill the node with elements */
	intNode->n = n;
	intNode->next = NULL;

	/* if the list is empty */
	if (*head == NULL)
		*head = intNode;
	else
	{
		/* walk though the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* make the last element point to the new node */
		temp->next = intNode;
	}

	return (intNode);
}

