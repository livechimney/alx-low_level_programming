#include <stdio.h>
#include<stdlib.h>
/**
*function creates array of char
*initialize with specific char
*return 0 if size is  null
*return pointer to array if it fails
*
*/

int main(void);
char *create_array(unsigned int size, char c)
{
size_t i;
char *ptr;
if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
