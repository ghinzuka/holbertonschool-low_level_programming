#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the function name
 * @argc: size of argv
 * @argv: array of string
 * Return: 0 if ok
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
	printf("the program name is %s\n", argv[0]);
	}
	return (0);
}
