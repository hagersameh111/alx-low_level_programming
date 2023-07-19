#include <stdio.h>
/**
 * main- alpha
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet += 1;
		}
		else
		{
		putchar(alphabet);
		alphabet += 1;
		}
	}
	putchar('\n');
	return (0);
}
