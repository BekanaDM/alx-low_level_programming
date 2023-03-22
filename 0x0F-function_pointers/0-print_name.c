#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: The string to be printed.
 */

void print_name(char *name, void (*f)(char *)) 
{
    f(name);
}
