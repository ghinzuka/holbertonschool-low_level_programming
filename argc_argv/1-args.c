#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: arguments
 * @argv: array of srtings
 * Return: 0 if ok
 */
int main(int argc, char *argv[])
{
	if (argc >= 0 && *argv[0] != '\0')
	{
		printf("%d\n", argc);
	}
	return (0);
}
