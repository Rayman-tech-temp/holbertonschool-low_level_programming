#include "lists.h"

/**
 * count_str - function to count char array.
 * @str: the string subject to counting.
 * Return: int - the iteration of the array.
 */

int count_str(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

/**
 * add_node_end - adding new item to the linked list
 * @head: the function variable passed into this
 * @str: the value the node will store
 * Return: new_node - returns a pointer to the new
 * node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *dupe;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dupe = strdup(str);
	new_node->str = dupe;
	new_node->len = count_str(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
