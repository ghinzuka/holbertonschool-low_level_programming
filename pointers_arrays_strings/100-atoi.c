#include "main.h"
/**
 * _atoi - function that chang a String into an INT
 * @s: text to change
 * Return: return the numbers
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int minus = 1;
	char *letter;

	letter = s;

	while (*letter != '\0' && (*letter < '0' || *letter > '9'))
	{
		if (*letter == '-')
		{
			minus *= -1;
		}
	letter++;
	}
	while (*letter != '\0' && (*letter >= '0' && *letter <= '9'))
	{
		num = num * 10 + *letter - '0';
		letter++;
	}
return (num * minus);
}
