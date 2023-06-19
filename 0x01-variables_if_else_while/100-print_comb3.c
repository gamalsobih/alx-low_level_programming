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
	char m[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		for (n = i+1 ; n < 10; n++)
		{
		putchar(m[i]);
		putchar(m[n]);
	}

	};
	putchar('\n');
	return (0);
}
