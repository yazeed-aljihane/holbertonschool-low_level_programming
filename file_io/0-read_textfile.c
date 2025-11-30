#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>


/**
* read_textfile - read text file and prints it to POSIX standard output.
* @filename: name of file
* @letters: number of letters you want to read
* Return: the count of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, finalCount;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		{
		close(fd);
		return (0);
		}
	count = read(fd, buffer, letters);
	if (count == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	finalCount = write(STDOUT_FILENO, buffer, count);
	if (finalCount != count)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (finalCount);
}

