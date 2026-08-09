#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dupe;
	int i;

	dupe = strdup(str);
	new_node = malloc(sizeof(list_t));

	new_node->str = dupe;
	new_node->next = *head;
	*head = new_node;

	i = 0;
	while(str[i] != '\0')
	{
		i = i + 1;
	}
	new_node->len = i;
	return (new_node);
}
