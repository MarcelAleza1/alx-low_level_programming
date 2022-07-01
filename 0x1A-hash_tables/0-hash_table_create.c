#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to a new hash table if sucess
 * and NULL if failure
 */
hash_table_T *hash_table_create(unsigned long int size)
{
	hash_table_t *hsht;
	unsigned long int i;

	hsht = malloc(sizeof(hash_table_t));
	if(hsht == NULL)
		return (NULL);

	hsht->size = size;
	hsht->array = malloc(sizeof(hash_nod_t *) * size);
	if (hsht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hsht->array[i] = NULL;

	return (hsht);
}
