#include "main.h"

/**
 * set_bit - bit at a index is set to 1
 * @n: sets pointer to the number to change
 * @index: set index of the bit to 1
 *
 * Return: On success,return 1,or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

