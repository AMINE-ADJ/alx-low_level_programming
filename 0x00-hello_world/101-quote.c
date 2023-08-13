#include <stdio.h>
#include <unistd.h>
/**
 * main - print to standard error
 *
 * Return: 0
 */
int main(void)
{
char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, a, 59);
	return (1);
}
