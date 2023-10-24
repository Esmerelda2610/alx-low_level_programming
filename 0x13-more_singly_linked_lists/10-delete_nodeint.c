#includ "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a linked list at a certain index
 * @head: pointer to first element in the list
 * @index: index of node to delete
 *
 * Return: 1 (success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
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
