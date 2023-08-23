#include<time.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * main - just to crack a file
 */
void main(void)
{

	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}

	putchar(2772 - sum);


}
