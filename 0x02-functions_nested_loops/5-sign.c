#include "main.h"
/**
 * print_sign- priont sign
  * Return: 1 and prints + if n is greater than zero
 *  @n: the int to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
	return (-1);
	}
	else
	{
		_putchar(48);
	return (0);
	}
}
