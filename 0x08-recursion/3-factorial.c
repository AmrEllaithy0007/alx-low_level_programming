#include "main.h"
/**
 *factorial - Entry point
 *@n: integr
 *Return: Always 0 (Success)
 *
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
