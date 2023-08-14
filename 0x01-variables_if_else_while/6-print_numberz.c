#include<stdio.h>
/**
 * main - a simple function
 * Description: just a simple function that prints numbers with putchar.
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar(10);
	return (0);
}
