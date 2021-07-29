#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: pointer to the  start of the linked likst
 *
 * Return: number of a element in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
