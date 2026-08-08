#include "lists.h"

/**
 * list_len - iteration through linked list
 * while understanding handling input.
 * @h: a constant header to safely pass without
 * fear of alterations.
 * Return: count - unsigned int that reflects
 * the number of element.
 */

size_t list_len(const list_t *h)
{
	list_t *temp;
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	else if (h != NULL)
	{
		temp = malloc(sizeof(list_t));
		temp->str = h->str;
		temp->len = h->len;
		temp->next = h->next;
		while (temp->next != NULL)
		{
			count = count + 1;
			temp = temp->next;
		}
	}

	count = count + 1;
	return (count);
}
