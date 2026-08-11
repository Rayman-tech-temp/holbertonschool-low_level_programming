#include "lists.h"

/**
 * add_dnodeint_end - a function that adds new
 * node to the end of the list with head.
 * @head: head of the list to add at the start.
 * @n: value to create with.
 * Return: current - the new node at the start
 * of the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		current->prev = temp;
		current->n = n;
		temp->next = current;
	} else
	{
		current->next = NULL;
		current->n = n;
		current->prev = NULL;
		*head = current;
	}

	return (current);
}
