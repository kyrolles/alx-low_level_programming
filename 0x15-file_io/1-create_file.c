#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  *
  * Return: Int value of the lenth.
  */

int _strlen(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
{
count++;
}

return (count);
}

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
int chars_written;

	if (!filename)
	{
		return (-1);
	}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
