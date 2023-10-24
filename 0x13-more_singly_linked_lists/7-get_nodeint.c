#include "lists.h"

/**
* get-nodeint_at_index - returns node at a particular index
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return:pointer to node we are looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	/* walk through the list until we get the right index */
	for (i = 0; (i < index && temp != NULL); i++)
	{
		temp = temp->next;
	}
	/* if no index */
	if (temp == NULL)
		return (NULL);
	else
		return (temp);/* return the node */
}
