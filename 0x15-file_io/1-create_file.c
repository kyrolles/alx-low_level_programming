#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - function that will create a new file and fill with with some
 * content.
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on scucess, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
/* char *buf; */
int chars_written;

	if (!filename)
	{
		return (-1);
	}
fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
		if (fd < 0)
			{return (-1); }

/* buf = malloc(sizeof(char)* strlen(text_content)); */

chars_written = write(fd, text_content, strlen(text_content));
	if (chars_written < 0)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}
