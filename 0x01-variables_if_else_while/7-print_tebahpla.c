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
	char i;

	for (i = 'z'; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
