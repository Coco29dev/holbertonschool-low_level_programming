#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Executes a function on a string (name).
 * @name: The string to be passed to the function.
 * @f: A pointer to a function that takes a string (char *) and returns void.
 *
 * Description:
 * This function accepts a string (name) and a function pointer (f) as
 * arguments. It calls the function pointed to by f, passing the string
 * name to it. The function f is expected to perform an action with the
 * name, such as printing it or modifying it, depending on the specific
 * function provided.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
