#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -linking two strings together from passed args.
 *
 * @s1: a pointer to a generic allocated memmory of
 * a pointer.
 * @s2: a second pointer to a generic allocated
 * memory of a pointer.
 *
 * Return: char *array - a pointer array that contains
 * specified text listed in passed arg.
 */

unsigned int count(char *array)
{
	unsigned int i;

	i = 0;
	while (array[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char *half_filled(char *pour, char *cup, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		cup[i] = pour[i];
		i = i + 1;
	}
	return (cup);
}

char *str_concat(char *s1, char *s2)
{
	char *charArr;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int length;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	} else if (s2 == NULL)
	{
		i = count(s1) + 1;
		charArr = (char *) malloc(i * sizeof(char));
		charArr = half_filled(s1, charArr, i);
		return (charArr);
	} else if (s1 == NULL)
	{
		i = count(s1) + 1;
		charArr = (char *) malloc(i * sizeof(char));
		charArr = half_filled(s2, charArr, i);
		return (charArr);
	}
	i = count(s1);
	j = count(s2);
	length = i + j + 1;
	charArr = (char *) malloc(length * sizeof(char));
	if (charArr == NULL)
		return (NULL);
	for (k = 0; j < length - i && s1[k] != '\0'; k = k + 1)
	{
		charArr[k] = s1[k];
	}
	for (k = 0; k + i < length; k = k + 1)
	{
		charArr[i + k] = s2[k];
	}
	return (charArr);
}
