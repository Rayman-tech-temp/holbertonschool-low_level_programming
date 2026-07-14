#include <stdio.h>
/**
 * main - This is to demostrate the size of function in the
 * stdio.h librbary. this also show the size of unallocated
 * declared variables int a c program.
 *
 * Return: 0 as it is a simple excerise of running
 * functions for beginner programming - always SUCCESS
 */

int main(void)
{
	/**
	 * simple declaration of Variables
	 */
	char charVar;
	int intVar;
	long longVar;
	long long longLongVar;
	float floatVar;

	/**
	 * prints data size of the variables in bytes.
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(charVar));
	printf("Size of an int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongVar));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));

	return (0);
}
