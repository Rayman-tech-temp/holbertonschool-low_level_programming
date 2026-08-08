#include "lists.h"

size_t list_len(const list_t *h)
{
	list_t *temp;
	size_t count;

	count = 0;
	if(h->next != NULL)
	{
		count = count + 1;
		temp = malloc(sizeof(list_t));
		temp->str = h->str;
		temp->len = h->len;
		temp->next = h->next;
		while (temp->next != NULL)
		{
			count = count + 1;
			temp = temp->next;
		}
	} else if (h == NULL)
		return (count);
	else
		count = count + 1;

	return (count);
}
