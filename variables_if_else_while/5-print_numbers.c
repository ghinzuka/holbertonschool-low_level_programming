#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

/**
 * main - main functon
 *
 * Description: 'the function should print all single digit starting from 0'
 *
 * Return: Always return  0
 */

int main(void)

{
	int n = 0;

	for (n = '0'; n <= '9'; n++)
	{
		printf("%d", n);
	}

	return (0);
}
