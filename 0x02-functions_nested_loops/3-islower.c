#include "main.h"

/**
 * _islower - Entry point
 * @c: integer representing the acsicc value of lower case characters
 * Return: returns 0 if c is a lower case else 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
