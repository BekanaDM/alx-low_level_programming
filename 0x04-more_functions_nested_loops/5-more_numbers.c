#include "main.h"

/**
 * more_numbers - Prints 10 times the number.
 */
void more_numbers(void)
{
        int i = 0;
        char j;

        for (i = 0; i < 10; i++)
        {
                for (j = '1'; j <= '14'; j++)
                {
                        _putchar(j);
                }
                _putchar('\n');
        }
}

