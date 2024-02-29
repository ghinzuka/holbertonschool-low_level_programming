#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first to compare
 * @s2: second to compare
 * Return: return 0 if  compare is ok
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	}
return(0);
}
