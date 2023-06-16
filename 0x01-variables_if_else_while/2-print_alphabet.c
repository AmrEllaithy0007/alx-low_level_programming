#include <stdio>
/**
 * main - Entry Point
 *
 * Description: Function that using putchar to return a alphabet
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		iputchar(letter);
	}
	putchar ('\n');

	return (0);
}
