#include <stdio.h>
/**
 *main - so cool
 *Description: size
 *Return: 0 so cool
 */

int main(void)
{
int a;
char b;
float c;
printf("Size of a char: %ld byte(s)\n", sizeof(b));
printf("Size of an int: %ld byte(s)\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(c));
return (0);
}
