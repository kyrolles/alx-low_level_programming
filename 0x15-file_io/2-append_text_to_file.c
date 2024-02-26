#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to write into.
 * @text_content: text to append to file
 *
 * Return: 1 (SUCCESS), else -1 (FAILURE)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int chars_written;

	fd = chars_written = 0;
	if (!filename)
	{
		return (-1);
	}
	else if (!text_content || !text_content[0])
	{
		return (1);
	}
fd = open(filename, O_WRONLY | O_APPEND);
		if (fd < 0)
			{return (-1); }

chars_written = write(fd, text_content, _strlen(text_content));
	if (chars_written < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

