#include "main.h"
/**
 *print_last_digit - Entry point
 *
 *@n:Number need to be treated
 *
 *Return: value of the last digit
 **/

int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar(n + '0')
	return (n);
}
