#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the process with status 98.
 *
 * Description:
 * The function attempts to allocate memory of size `b` bytes using the
 * `malloc` function. If the allocation fails (i.e., malloc returns NULL),
 * the process is terminated with an exit status of 98. If the allocation
 * succeeds, the pointer to the allocated memory is returned.
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

