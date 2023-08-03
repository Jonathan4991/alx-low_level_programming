#include "main.h"

/**
 * get_bit - set to return the values of a bit at an index in  decimal number
 * @n: the number to search for
 * @index: the index of the bit
 *
 * Return: Returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

