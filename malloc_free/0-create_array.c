#include <stdlib.h>
/**
 * create_array - creating and populating an array with specified
 * character passed in arguments.
 * @size: specified size of array which cannot be negative.
 * @c: specified character to populate the array with.
 *
 * Return: char *array - a pointer array that can be accessed by pointers
 * allowing to alter the memory's stored value
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *ptr;
	*ptr = (char*) malloc(size * sizeof(char));
	unsigned int i;

	for (i = 0; i <= size - 1; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
