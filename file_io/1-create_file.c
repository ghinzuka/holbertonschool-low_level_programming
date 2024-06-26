#include "main.h"
/**
 * create_file - function that creates a file.
 * @text_content: NULL terminated string to write to the file
 * @filename: file to create
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int len = 0, fo, fw;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (len[text_content])
		{
			len++;
		}
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
	{
		return (-1);
	}
	fw = write(fo, text_content, len);
	if (fw == -1)
	{
		return (-1);
	}

	close(fo);

	return (1);
}
