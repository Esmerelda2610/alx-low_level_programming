/*
 * File: 2-key_index.c
 * Auth: Elizabeth Motsinone
*/

#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair shouldbe stored in array
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: use the djb2 algorith.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
