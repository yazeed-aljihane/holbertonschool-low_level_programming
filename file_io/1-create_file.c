#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>




/**
* create_file -  function that creates a file.
* @filename: the name of file to create
* @text_content: the contint of new file
* Return: return 1 if success or -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeFile, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	writeFile = write(fd, text_content, i);
	if (writeFile == -1 || writeFile != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
