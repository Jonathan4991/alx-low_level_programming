#include "main.h"
#include <unistd.h>
/**
 * _putchar - set to write char c to stdout
 * @c: char to print
 *
 * Return: Returns 1 on success.
 * to return -1 on error,and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

