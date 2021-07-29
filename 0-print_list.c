#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nbr_nodes++;
		h = h->next;
	}

		return (nbr_nodes);
}
