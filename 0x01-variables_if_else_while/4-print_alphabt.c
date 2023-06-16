#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Function that using putchar to print
 * all except e q
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n')

	return (0);
}
