#include "main.h"
/**
 * read_textfile - read a text a print in posix output
 * @filename: file to open read and write
 * @letters: number of letters to write from filename
 * Return: 0 if functio fail to open filename or write or number of letters
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lenght;
	ssize_t fo, fr, fw;

	if (filename == NULL)
	{
		return (0);
	}
	lenght = malloc(sizeof(char) * letters);

	if (lenght == NULL)
	{
		return (0);
	}
	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		free(lenght);
		return (0);
	}
	fr = read(fo, lenght, letters);
	if (fr == -1)
	{
		free(lenght);
		return (0);
	}
	fw = write(STDOUT_FILENO, lenght, fr);
	if (fw == -1 || fw != fr)
	{
		free(lenght);
		return (0);
	}
free(lenght);
close(fo);

return (fw);
}
