#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Function thatprints Hexadecimal
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int dig = 0;

	while (dig < 10)
	{
		putchar(dig + '0');
		dig++;
	}
	dig = 0;
	while (dig < 6)
	{
		putchar(dig + 'a');
		dig++;
	}
	putchar('\n');
	return (0);
}
