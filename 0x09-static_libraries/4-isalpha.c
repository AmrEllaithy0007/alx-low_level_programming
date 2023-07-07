#include "main.h"

/**
 * _isalpha - printing lower and upper char
 *
 * @c:charachter to be checked
 *
 *Return: 0 if Lower or upper and 1 otherwise
 **/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
