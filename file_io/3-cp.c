#include "main.h"
#define BUFFER_SIZE 1024
/**
 * open_files - open files
 * @file_from: pointer
 * @file_to: pointer
 * @fd_from: pointer
 * @fd_to: pointer
 * Return: 0
 */
int open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
*fd_from = open(file_from, O_RDONLY);
if (*fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
return (98);
}
*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (*fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(*fd_from);
return (99);
}
return (0);
}
/**
 * copy_content - copy content file to other file
 * @fd_from: integrer
 * @fd_to: integrer
 * Return: 0
 */
int copy_content(int fd_from, int fd_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", "file_to");
return (99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", "file_from");
return (98);
}
return (0);
}
/**
 * main - main function cp
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
int result;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
result = open_files(argv[1], argv[2], &fd_from, &fd_to);
if (result != 0)
{
exit(result);
}
result = copy_content(fd_from, fd_to);
if (result != 0)
{
close(fd_from);
close(fd_to);
exit(result);
}
close(fd_from);
close(fd_to);
return (0);
}
