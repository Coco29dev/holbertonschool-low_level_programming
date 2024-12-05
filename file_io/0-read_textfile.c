#include "main.h"

/**
 * read_textfile - function that reads a texte file
 * and prints it to the POSIX standar output
 * @filename: file we must print
 * @letters: number char to print
 * Return: number of letters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd = 0;
ssize_t bytes_read;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
buffer = malloc(sizeof(char *)* letters);
if (buffer == NULL)
return (0);
if (fd == -1)
{
free(buffer);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);
return (bytes_read);
}
