#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n <  0)
	{
		_putchar ('_');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
