#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A C Programm is run two digits
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i = 0;
	int k;

	while (i < 10)
	{
		k = i + 1;
		while (k < 10)
		{
			if (i != k || i < k)
			{
				putchar(i + '0');
				putchar(k + '0');
				if (i + k < 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
			k++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
