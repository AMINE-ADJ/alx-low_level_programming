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
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
