#include "main.h"
/**
 * print_last_digit - last digit of n
 * @n: the number
 *
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	l = n % 10;
	if (l < 0)
	{
	_putchar('0' + -l);
	return (-l);
	}
	else
	{
	_putchar('0' + l);
	return (l);
	}
}
