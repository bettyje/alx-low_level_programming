#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int r;
	char *a;

	r = 1;
	a = (char *) &r;

	return ((int)*a);
}
