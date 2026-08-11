#include "lists.h"

/**
 * add_dnodeint - a function that adds new
 * node to the start of the list with head.
 * @head: head of the list to add at the start.
 * @n: value to create with.
 * Return: current - the new node at the start
 * of the list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	if (*head != NULL)
	{
		current->next = *head;
		*head = current;
		(*head)->prev = current;
		current->n = n;
	} else
	{
		current->next = NULL;
		current->n = n;
		current->prev = NULL;
		*head = current;
		(*head)->prev = current;
	}

	return (current);
}
