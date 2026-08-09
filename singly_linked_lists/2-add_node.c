#include "lists.h"

/**
 * add_node - adding new item to the linked list
 * @head: the function variable passed into this
 * @str: the value the node will store
 * return: new_node - returns a pointer to the new
 * node.
 */

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
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	new_node->len = i;
	return (new_node);
}
