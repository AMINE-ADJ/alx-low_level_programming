#include "main.h"


/**
 * puts2 - a simple one
 * @str: a pointer that holds the address of the first element of a string.
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
