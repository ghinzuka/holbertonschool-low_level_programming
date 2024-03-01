#include "main.h"
/**
 * leet -  function that encodes a string into 1337
 * @a: char to replace
 * Return: the string to return
 */
char *leet(char *a)
{
char car [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
int number [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
int i;
int b;

for (i = 0; a[i] != '\0'; i++)
{
	for (b = 0; b < 11; b++)
	{
		if (a[i] == car[b])
		{
			a[i] = number[b];
		}
	}
}
return (a);
}
