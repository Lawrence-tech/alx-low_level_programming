#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  *read_textfile - reads a text file and prints it to the POSIX standard
  *output.
  *@filename: name of file
  *@letters: number of characters to read and print
  *Return: the actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	fd_read = read(fd, buf, letters);
	if (fd_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	fd_write = write(STDOUT_FILENO, buf, fd_read);

	free(buf);
	close(fd);
	if (fd_write != fd_read)
		return (0);
	return (fd_read);
}
