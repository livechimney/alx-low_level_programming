#include"main.h"
#include<stdlib.h>
/**
 **malloc_checked - allocates memory using malloc
 *Prototype: void *malloc_checked(unsigned int b);
 *return pointer to malloc
 *if malloc fails return 98
 *@b number of byte to allocate
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)

exit(98);

return (ptr);
}
