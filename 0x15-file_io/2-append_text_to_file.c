#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *append_text_to_file- function that appends at the end of file
 *@filename:filename to be used
 *@text_content: added contents
 *Return: 1 if the file exist or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, counter, wr;

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content)
	{
		for (counter = 0; text_content[counter]; counter++)

			;
		wr = write(i, text_content, counter);
		if (wr == -1)
			return (-1);
	}
	close(i);
	return (1);
}
