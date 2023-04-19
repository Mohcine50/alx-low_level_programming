#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function print name
 * @name: String of the name
 * @f: pointer funcion that help to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
