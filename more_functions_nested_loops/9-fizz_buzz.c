#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number from 0 to 100 remplacing some of the resulte by string 
 *
 * @i: number to print
 */

int main (int)
{
	int i;
	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz\ ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\ ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\ ");
		}
	printf("%d\ ", i);
	}
}
