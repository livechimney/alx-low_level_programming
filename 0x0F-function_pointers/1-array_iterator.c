#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterate - iterate through an array
 *@array: target array
 *@size: array size
 *@action: function pointer to array
 *return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(*array);
array++;
}

}

