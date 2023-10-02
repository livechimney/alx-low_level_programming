#include<stdio.h>
#include<stdlib.h>
/**
*_strdup - return a pointer to a newly allocated
*space in memory duplicate
*return pointer to allocate memory
*an arrey of characters
*
*/

char *_strdup(char *str)
{
size_t i, j;
char *stdout;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}

stdout = (char *)malloc(sizeof(char) * (i + 1));

if (stdout == NULL)
{
return (NULL);
}

for (j = 0; j <= i; j++)
{
	stdout[j] = str[j];

}
return (stdout);
}
