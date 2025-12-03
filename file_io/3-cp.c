#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024

/**
* CloseFile - close files
* @fd: the wanted file to close
*/
void CloseFile(int fd)
{
if ((close(fd)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}


/**
* FilesCopy - copy from file1 to file 2
* @file1: first file
* @file2: sucond file
*/
void FilesCopy(char *file1, char *file2)
{
	int fd1, fd2;
	ssize_t read_file, write_file;
	char buffer[BUF_SIZE];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		CloseFile(fd1);
		exit(99);
	}
	while ((read_file = read(fd1, buffer, sizeof(buffer))) > 0)
	{
	write_file = write(fd2, buffer, read_file);
	if (write_file == -1 || write_file != read_file)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		CloseFile(fd2);
		CloseFile(fd1);
		exit(99);
	}
	}
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		CloseFile(fd2);
		CloseFile(fd1);
		exit(98);
	}
	CloseFile(fd2);
	CloseFile(fd1);
}

/**
* main - main
* @ac: argumint count
* @av: argumints variabuls
* Return: 0 if success or 1 otherwise
*/
int main(int ac, char **av)
{


	if (ac == 3)
	{
		FilesCopy(av[1], av[2]);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}





