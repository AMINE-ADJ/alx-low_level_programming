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

	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
