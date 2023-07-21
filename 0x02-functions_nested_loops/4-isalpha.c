#include "main.h"
/**
 * _isalpha- if is an alpha or not
 * Return: 1 if true
 * @c: parameter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
