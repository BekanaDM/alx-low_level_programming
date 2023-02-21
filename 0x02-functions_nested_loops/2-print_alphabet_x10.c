#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
int j;

	for(i = 0; i < 10; i++)
	{	
	j = 'a';

		for ( j = 'a'; j <= 'z'; j++)
		{
            	putchar(j);
		}
	putchar('\n');
	}
}

int main(void)
{
print_alphabet_x10();
return (0);
}
