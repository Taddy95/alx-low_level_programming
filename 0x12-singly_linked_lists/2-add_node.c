#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double p;ointger to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *item = malloc(sizeof(list_t));

	if ((nstr == NULL && str != NULL) || item == NULL)
		return (free(nstr), free(item), NULL);
	item->str = nstr, item->len = 0,
		item->next = head == NULL ? NULL : *head;
	if (str != NULL)
		for (; *str; str++)
			item->len++;
	*head = item;
	return (item);
}
