#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *read_textfile - a funtion that reads the content of a textfile
 *@filename:file to be read
 *@letters:number of letters to be read and printed
 *Return:bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t re, wr;
	char *c;

	if (!filename)
	{
		return (0);
	}
	i = open(filename, O_RDONLY);

	if (i == -1)
	{
		return (0);
	}
	c = malloc(sizeof(char) * (letters));
	if (!c)
	{
		return (0);
	}
	re = read(i, c, letters);
	wr = write(STDOUT_FILENO, c, re);

	close(i);
	free(c);
	return (wr);
}
