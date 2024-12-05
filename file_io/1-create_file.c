#include "main.h"

/**
 * create_file - create a function create a file
 * @filename: pointeur
 * @text_content: pointeur
 * Return: n
 */

int create_file(const char *filename, char *text_content)
{
int error_flag = 0;
int count = 0;
int fd = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
while (*text_content)
{
text_content++;
count++;
}
error_flag = write(fd, text_content, count);
if (error_flag == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
