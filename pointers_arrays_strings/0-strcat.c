#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function to add the first half into the second half of the two
 * input parametres.
 * Return: nothing the passed values are altered
 */

void _strcat(char in1[], char in2[])
{
	char sentence[];
	char* cursor;
	int length;
	for(int i = 0; cursor != '\0'; i++)
	{
	cursor = &in1[i];
	sentence[i] = *cursor;
	length++;
	}

	for(int i= 0; cursor != '\0'; i++)
	{
	cursor = &in2[i];
	sentence[length] = *cursor;
	length++;
	}
	for(int i = 0; cursor != '\0'; i++)
	{
	/*overwrite the input 2 array to be the full */
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
 	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
