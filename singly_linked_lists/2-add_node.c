#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dupe;

	dupe = strdup(str);
	new_node = malloc(sizeof(list_t));

	new_node->str = dupe;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
