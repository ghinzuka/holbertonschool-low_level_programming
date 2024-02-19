#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - main functon
 *
 * Description: 'the function should print the size of various types'
 *
 * Return: Always return  0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf ("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf ("%d is negative\n", n);
	}
	else if(n==0)
	{
		printf ("%d is zero\n", n);
	}

	return (0);
}
