#include "hash_tabes.h"

/**
 * key_index - gives you the index of a key
 * @ke: the key
 * @size: size of the arry of the hash table
 * Return:the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return 0;
	return (hash_djb2(key) % size);
}
