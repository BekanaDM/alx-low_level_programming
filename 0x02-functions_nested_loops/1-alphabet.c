#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)

		putchar(low);
	putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
