#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int n;
	int  m[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 48; i < 58; i++)
	{
		for (n = i + 1 ; n < 58; n++)
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
