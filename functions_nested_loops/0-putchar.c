#include <stdio.h>

/**
 * main - main functon
 *
 * Description: 'print _putchar using  write function.'
 *
 * Return: Always return  0
 */

int write(int filedes, const char *buf, unsigned int nbyte);

int main(void)
{
	write(1, "\ putchar\n", 13);
	return (0);
}
