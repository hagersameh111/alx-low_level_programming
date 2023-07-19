#include <stdio.h>
/**
 * main- alpha
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 99)
	{
		putchar(x + '0');
		if (x < 100)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
