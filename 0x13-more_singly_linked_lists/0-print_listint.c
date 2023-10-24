#include "lists.h"

/**
*print_listint - Function to print element of a inked list.
*@h: The head pointer of linked list.
*Return: Size of lists.
*/

size_t print_listint(const listint_t *h)
{

	size_t list_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_counter++;
	}
	return (list_counter);

}
