#include "main.h"

/**
 * get_endianness - check endiannes.
 * Return: 0 if big endian, or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int j = 1;

	char *c = (char *)&j;

		return ((int)*c);

}
