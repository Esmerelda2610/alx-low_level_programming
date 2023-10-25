#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: string to append to
 * @src: string to add
 *
 * Return:  pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
