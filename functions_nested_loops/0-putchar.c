#include <stdio.h>
#include <unistd.h>

/**
 * main - main functon
 *
 * Description: 'print _putchar using  write function.'
 *
 * Return: Always return  0
 */

int main(void)
{
	write(1, "_putchar", 9);

	return (0);
}
