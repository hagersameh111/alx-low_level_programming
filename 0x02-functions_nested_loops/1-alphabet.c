#include "main.h"
/**
 * main- entry point
 * Return: 0
 * print_alphabet- print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
