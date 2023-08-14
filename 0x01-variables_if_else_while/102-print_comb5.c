#include <stdio.h>
/**
 * main - a simple function
 * Description: just a simple function that prints letters with putchar.
 *
 * Return: always 0
 *
 */

int main(void)
{

	int i, j, z, w;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (w = '0'; w <= '9'; w++)
				{
					if ((i == z && w > j) || i < z)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(z);
						putchar(w);
					if (i != '9' || j != '8' || z != '9' || w != '9')
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
