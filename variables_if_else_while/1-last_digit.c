#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main functon
 *
 * Description: 'print the last digit of the number stored in the variable n.'
 *
 * Return: Always return  0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = number % 10;
	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, Last_digit);
	}
	else if (last_digit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, Last_digit);
	}
	else if (last_digit < 6 && != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
	}

	return (0);

}
