#include  <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing multible of 3
 *
 *
 *Return: Always 0 (Success )
 */

int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
