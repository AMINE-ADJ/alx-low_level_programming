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
	char *a = "0123456789abcdef\n";

	for (i = 0; i <= 17; i++)
	{
		putchar(a[i]);
	}

	return (0);
}