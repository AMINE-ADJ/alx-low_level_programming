#include "main.h"
#include<string.h>

/**
 * print_rev - a simple one
 * @s: a pointer that holds the address of the first element of a string.
 *
 */
void rev_string(char *s)
{
	int i, len;

	i = 0;
	len = strlen(s);
	while (s[i] != '\0')
	{
		_putchar(s[len]);
		i++;
		len--;
	}
	_putchar('\n');
}
