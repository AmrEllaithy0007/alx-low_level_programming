#include "main.h"
/**
 *print_rev - Entry point
 *
 *@s: char to be printed
 *
 *Return: Void
 *
 **/

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
	longi++;
	s++;
	}

	for (o = longi; o > 0; o--)
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
