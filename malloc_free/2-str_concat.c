#include <stdlib.h>

/**
 * str_concat -
 * .
 * @s1: a pointer to a generic allocated memmory of
 * a pointer.
 * @s2: a second pointer to a generic allocated
 * memory of a pointer.
 *
 * Return: char *array - a pointer array that contains
 * specified text listed in passed arg.
 */
char *str_concat(char *s1, char *s2)
{
	char *charArr;
	unsigned int i;
	unsigned int j;
	unsigned int length;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	} else if (s1 == NULL || s2 == NULL)
	{
		if (s1 != NULL)
			return (s1);
		else if (s2 != NULL)
			return (s2);
	} else
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i = i + 1;
	while (s2[j] != '\0')
		j = j + 1;
	length = i + j;
	charArr = (char *) malloc(length * sizeof(char));
	if(charArr ==NULL)
		return (NULL);
	for (j = 0; j < length - i && s1[j] != '\0'; j = j + 1)
	{
		charArr[j] = s1[j];
	}
	for (j = 0; j < length; j = j + 1)
	{
		charArr[i + j] = s2[j];
	}
	return (charArr);

}
