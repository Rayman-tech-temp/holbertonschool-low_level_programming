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
	char *charArr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	charArr = (char *) malloc(size * sizeof(char));
	if (charArr == NULL)
		return (NULL);
	for (i = 0; i <= size - 1; i++)
	{
		charArr[i] = c;
	}
	return (charArr);
}
