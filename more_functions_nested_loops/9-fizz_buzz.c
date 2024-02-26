#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number from 0 to 100 remplacing some of the resulte by string 
 *
 * @i: number to print
 */

int main (void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d ", i);
		}
	}

	return (0);
}
