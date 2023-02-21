#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
_putchar();
return (0);
}
