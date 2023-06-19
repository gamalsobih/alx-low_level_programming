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
	int g;
	int  m[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (n = 0 ; n < 10; n++)
		{
		for (g = i + 1 ; g < 10; g++)
		{
		putchar(m[i]);
		putchar(m[n]);
		putchar(' ');
		for (g = i + 1 ; g < 10; g++)
		{
		putchar(m[i]);
		putchar(m[g]);
		}
									if (i < 8)
									{
									putchar(',');
									putchar(' ');
									}
		}


	}

	};
	putchar('\n');
	return (0);
}
