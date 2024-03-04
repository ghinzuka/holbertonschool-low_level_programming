#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: string to look for
 * Return: return a pointer
 */
char *_strstr(char *haystack, char *needle)
{
 int i;
 int j;

for (j = 0; needle[j] != '\0'; j++)
{
;
}
while (*haystack)
{
	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] != needle[i])
		{
			break;
		}
	}

		if (i != j)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
}
return ('\0');
}
