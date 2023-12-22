#include "hash_tables.h"

/**
 * key_index - a function to return the index of a key
 * @key: a pointer to the key
 * @size: size of hash table
 * Return: the index of a key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
