#include "main.h"

/**
 * clear_bit - value of a given bit is set to 0
 * @n: pointer to the number to change
 * @index: means index of the bit to clear
 *
 * Return: On success,return 1,or -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

