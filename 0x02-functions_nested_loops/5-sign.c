#include "main.h"
/**
 *print_sign - Entry point to print values
 *
 * @n:number to be checked
 *
 * Return: 0 if conditions or otherwise
 **/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return	(1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return	(-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
