#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: positive, zero or negative integer.
 * Return: 1 on positive, 0 on zero and -1 on negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
