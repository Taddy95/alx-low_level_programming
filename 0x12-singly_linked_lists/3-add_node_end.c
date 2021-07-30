#include "lists.h"
#include <string.h>

/**
 * add_node_end - Creates and add nodes at the end of head
 * @head: a double pointer to string node
 * @str: a strikng to create a node from
 *
 * Return: the node created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *item = malloc(sizeof(list_t));

	if ((nstr == NULL && str != NULL) || item == NULL)
		return (free(nstr), free(item), NULL);
	item->str = nstr, item->len = 0, item->next = NULL;
	if (str != NULL)
		for (; *str; str++)
			item->len++;
	if (*head == NULL)
		return ((*head = item), item);
	while ((*head)->next != NULL)
		head = &(*head)->next;
	(*head)->next = item;
	return (item);
}
