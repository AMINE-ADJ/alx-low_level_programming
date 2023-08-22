#include<string.h>
#include "main.h"

/**
 * puts_half - a function
 * @str: a param
 */
void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
