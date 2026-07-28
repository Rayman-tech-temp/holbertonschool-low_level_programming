#include <stddef.h>

/**
 * array_iterator - thingo stuff to yap about
 * @array: the subject of the action
 * @size: the number of elements in the array.
 * @action: pointer function from main.c function.
 *
 * Return: void - this function is to demostrate passing
 * functions through.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*funct)(int);
	int i;
	int volume;

	funct = action;
	i = 0;
	volume = (int) size;
	while(i < volume)
	{
		funct(array[i]);
		i = i + 1;
	}
}
