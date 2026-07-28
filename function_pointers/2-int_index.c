#include <stddef.h>

/**
 * int_index - cycles through an array until a a function
 * returns a true value which is 1 (or more)
 * @array: the subject of searching
 * @size: the number of elements in the passed array
 * @cmp: the comparison function being used by main.
 * Return: int - a value that reflects the index that showed
 * true in the three functions, -1 on fail to find.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*funct)(int);
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	funct = cmp;
	i = 0;
	while (i < size)
	{
		if (funct(array[i]) != 0)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
