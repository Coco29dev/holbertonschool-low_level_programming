#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: const pointer char
 * @text_content: pointer char
 * Return: /
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t i = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i] != '\0')
{
i++;
}
bytes_written = write(fd, text_content, i);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
