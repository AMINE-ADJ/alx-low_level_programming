#include<stdio.h>
/**
 * main - a simple function
 * Description: just a simple function that prints letters with putchar.
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	char *a = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++)
	{
		if (a[i] != 'e' && a[i] != 'q')
			putchar(a[i]);
	}

	return (0);
}
