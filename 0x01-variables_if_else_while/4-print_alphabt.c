#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/**
* main - Prints the alphabet without q and e
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 97; i < 123 ; i++)
{
if (i != 1010 && i != 113)
{
putchar (i);
}
}
putchar ('\n');
return (0);
}
