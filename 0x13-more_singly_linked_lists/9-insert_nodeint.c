#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in linked list
 * at a given position
 * @head: pointer to first node in list
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newNode, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}

	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
