#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


/**
  *create_file - Create a function that creates a file.
  *@filename: is the name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int fd_read = 0, inlen = 0;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, buf = text_content; *buf; buf++)
			inlen++;
		fd_read = write(fd, text_content, inlen);
	}

	if (close(fd) == -1 || inlen != fd_read)
		return (-1);
	return (1);
}
