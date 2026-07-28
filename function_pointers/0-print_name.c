/**
 * print_name - consolidates all the functions into a function that
 * executes passed arugments.
 *
 * @name:  a pointer array for a name to be printed.
 * @f:  a function that needs a char pointer array to
 * print mentioned in main print name as is & print
 * name uppercase.
 *
 * Return: void - this will only reference other parts
 * of code in main to demostrate pointer functions.
 */

void print_name(char *name, void (*f)(char *))
{
	void (*funct)(char *);

	funct = f;
	funct(name);
}
