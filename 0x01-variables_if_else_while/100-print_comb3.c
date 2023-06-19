#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int n;
	int  m[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (n = i + 1 ; n < 10; n++)
		{
		putchar(m[i]);
		putchar(m[n]);
		putchar(',');
		putchar(' ');

	}

	};
	putchar('\n');
	return (0);
}
