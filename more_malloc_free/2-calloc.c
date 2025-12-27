#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, initializes to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
