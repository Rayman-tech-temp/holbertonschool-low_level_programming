#ifndef LISTS_HEADER_H
#define LISTS_HEADER_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - the node structure of the link
 * list
 * @str: a char array.
 * @len: the length of the char array.
 * @next: the link to the next element.
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
