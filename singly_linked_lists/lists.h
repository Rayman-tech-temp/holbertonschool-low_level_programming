#ifndef LISTS_HEADER_H
#define LISTS_HEADER_H

#include <stdio.h>
#include <stdint.h>

typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif
