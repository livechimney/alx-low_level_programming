#include<stdlib.h>
/**
 *function that concatenates two strings
 *returned point should point to new space in memory
 *if null is passed should be treated as new string
 *function return null if failed
 */
char *str_concat(char *s1, char *s2)
{
size_t i, j, len1, len2;
char *ptr;
if (s1 == NULL)
{
	s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
i = 0;
while (s1[i] != '\0')
{
	i++;
}
j = 0;
while (s2[j] == '\0')
{
j++;
}
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
{
	return (NULL);
	free(ptr);
}
for (len1 = 0; len1 < i; len1++)
{
ptr[len1] = s1[len1];
}
for (len2 = 0; len2 <= j; len2++)
{
	ptr[len1] = s2[len2];
	len2++;
}
return (ptr);
}
