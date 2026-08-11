#include "lists.h"

/**
 * dlistint_len - a function that explores the
 * the list through the next links.
 * @h: the head of the list to go down.
 * Return: count - a size_t variable of the
 * number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	dlistint_t *current;

	count = 0;
	if (h != NULL)
	{
		current = malloc(sizeof(dlistint_t));
		if (current == NULL)
			return (count);

		current->next = h->next;
		count = count + 1;
		if (current->next != NULL)
		{
			while (current->next != NULL)
			{
				count = count + 1;
				current = current->next;
			}
		}
	}
	return (count);
}
