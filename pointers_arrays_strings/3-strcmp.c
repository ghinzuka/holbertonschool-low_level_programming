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
	int j;

	for (i = 0, j = 0; s1[i] && s2[j]; i++, j++)
	{
	;
	}

	if (i < j)
	{
		return (-1);
	}
	else if (i == j)
	{
		return (0);
	}
	else
		return (1);

}
