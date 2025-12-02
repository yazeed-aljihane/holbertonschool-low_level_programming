#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"




/**
* append_text_to_file -  function that appends text at the end of a file.
* @filename: file name
* @text_content: the content of text
* Return: 1 if success or -1 if fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, writeF;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
	close(fd);
	return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;

	writeF = write(fd, text_content, i);
	if (writeF == -1 || writeF != i)
	{
		close(fd);
		return (-1);
	}



	close(fd);
	return (1);

}
