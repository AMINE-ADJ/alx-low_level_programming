#include "main.h"
#include<string.h>

/**
 * rev_string - a simple one
 * @s: a pointer that holds the address of the first element of a string.
 *
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	i = 0;
	len = strlen(s);

/*
 *	char tmp[len];
 *
 *	while (s[i] != '\0')
 *	{
 *		tmp[i] = s[len - 1];
 *		i++;
 *		len--;
 *	}
 *	i = 0;
 *	while (s[i] != '\0')
 *	{
 *		s[i] = tmp[i];
 *		i++;
 *	}
 */
	for (i = 0; i < len / 2; i++)
	{

		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;

	}


}
