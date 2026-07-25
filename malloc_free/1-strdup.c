#include <stdlib.h>

/**
 * _strdup - making a char array with allocated memory
 * from the malloc function with text from passed args.
 * @str: a pointer to a generic allocated memmory of
 * a pointer.
 *
 * Return: char *array - a pointer array that contains
 * specified text listed in passed arg.
 */
char *_strdup(char *str)
{
	char *charArr;
	unsigned int i;
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != 0)
		i = i + 1;
	length = i + 1;
	charArr = (char *) malloc(length * sizeof(char));
	for (i = 0; i < length; i = i + 1)
	{
		charArr[i] = str[i];
	}
	return (charArr);

}
