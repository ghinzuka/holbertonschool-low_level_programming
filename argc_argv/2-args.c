#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints all argument it receives
 * @argc: number of argument
 * @argv: array string of argument
 * Return: 0 if ok
 */
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
