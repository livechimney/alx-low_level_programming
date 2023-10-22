#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p = NULL;
size_t i;
size_t  max = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
	p = malloc(new_size);
	return (p);
}
else if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}

	if (new_size > old_size)
{
	max = old_size;
}
	for (i = 0; i < max; i++)
{
	p[i] = oldp[i];
	}
	free(ptr);
	return (p);
}
