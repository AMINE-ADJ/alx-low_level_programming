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
	char d;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
