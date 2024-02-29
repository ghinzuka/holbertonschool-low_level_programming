#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @a: char to change
 * Return: return the value of the changed character
 */
char *string_toupper(char *a)
{
int i;
int j = 32;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - j;
		}
	}
return (a);
}
