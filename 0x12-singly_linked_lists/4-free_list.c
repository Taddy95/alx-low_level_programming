#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked string list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
