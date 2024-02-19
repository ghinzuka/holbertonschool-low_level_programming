#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main functon
 *
 * Description: 'the function should print the alphabet in lowercase'
 *
 * Return: Always return  0
 */

int main(void)

{
	int x;

	for (x = 'A'; x <= 'Z'; x++)

	{

	x = tolower(x);
	putchar(x);

	}

	return (0);
}
