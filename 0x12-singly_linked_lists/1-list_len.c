#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns number of elements in a linked
 * @h: pointer to list
 * Return: Number of elements of the list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
