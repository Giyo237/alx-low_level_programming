#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
*create_file - function that creates a file
*@filename: file name to be created
*@text_content:file content
*Return: the -1 for err or 1 if succesful
*/
int create_file(const char *filename, char *text_content)
{
	int t, counter, wr;

	if (!filename)
		return (-1);
	t = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (t == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (counter = 0; text_content[counter]; counter++)
		wr = write(t, text_content, counter);
	if (wr == -1)
		return (-1);
	close(t);
	return (1);
}
