#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Function that using putchar
 * to return a alphabetal lower and uppercase
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');

		return (0);
}
