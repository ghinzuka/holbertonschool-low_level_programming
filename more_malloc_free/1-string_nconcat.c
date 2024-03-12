#include "main.h"
/**
 * string_nconcat - concatenates 2 strings of n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer to memory block
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int memlen = 0;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int lentotale = 0;
char *mem;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (i = 0; s2[i]; i++)
	{
		len2++;
	}
	if (len2 >= n)
	{
		lentotale = len1 + len2;
	}
	else
	{
		lentotale = len1 + n;
	}
	mem = malloc(sizeof(char) * (lentotale + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0;s1[i] ; i++)
	{
		mem[memlen++] = s1[i];
	}
	for (i = 0; s2[i] || i < n; i++)
	{
		mem[memlen++] = s2[i];
	}
	mem[memlen] = '\0';
return (mem);
}
