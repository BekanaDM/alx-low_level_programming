#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: A pointer to the head of the list_t list.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result * 2;
		}
		else if (b[i] == 'i')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
