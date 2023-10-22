#include "lists.h"

/**
 * add_node - adds new node at the beginning of the list_t list.
 * @str: string to be duplicated
 * @head: A double-pointer to the list
 * Return: address of new element, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);

}
