#include "main.h"
/**
 * _islower- is the letter lower or not
 * Return: 1 if true
 * @c: is the char to be checked
 */
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	return (1);
	else
		return (0);
}
