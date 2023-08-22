#include "main.h"


/**
 * _puts - a simple one
 * @str: a pointer that holds the address of the first element of a string.
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
