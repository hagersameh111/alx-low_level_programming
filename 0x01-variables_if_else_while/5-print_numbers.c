#include <stdio.h>
/**
 * main- numbers
 * Return: 0
 */
int main(void)
{
	int nums = 0;

	while (nums <= 9)
	{
		putchar(nums + '0');
		nums++;
	}
	putchar('\n');
	return (0);
}
