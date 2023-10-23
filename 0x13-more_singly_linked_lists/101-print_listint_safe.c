#include "lists.h"

/**
 * print_listint_safe - function that points a linked list with a loop safely.
 * @head: pointer to first node of linked list
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		i_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == i_n)
			{
				printf("->[%p] %d\n", (void *)tmp_n, tmp_n->);
				return (counter);
			}
			i_n = i_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);

}
