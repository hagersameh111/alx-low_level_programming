#include "main.h"
/**
 * print_alphabet_x10- print alpha 10 times
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	while (i < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
