#include "main.h"

/**
 * get_endianness - to check the endian size of a machine
 * Return: Return 0 for big,or 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

