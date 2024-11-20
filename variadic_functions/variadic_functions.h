#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - structure associant un format et une fonction de
 * affichage
 * @type: Le type d'argument
 * @f: La fonction associée pour afficher ce type d'argument
 */
typedef struct print
{
    char *type;
    void (*f)(va_list args);
} print_type;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
