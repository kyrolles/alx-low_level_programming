#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - fuction that read a text file and print it out the POSIX std
 * out
 * @filename: body of text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

	if (!filename || !letters)
	{
		return (0);
	}
fd = open(filename, O_RDONLY);
	if (fd < 0)
		{	perror("open");
			return (0); }
buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		{
		free(buffer);
		close(fd);
		return (0); }
bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		perror("read");
		free(buffer);
		close(fd);
		return (0); }
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0)
	{
		perror("write");
		free(buffer);
		close(fd);
		return (0); }
free(buffer);
close(fd);
return (bytes_written);
}
