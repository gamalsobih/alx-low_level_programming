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
	int h;
	int  m[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (i = 0; i < 10; i++)
	{
		for (n = 0 ; n < 10; n++)
		{
						for (g = 0 ; g < 10; g++)
						{
							for (h= 0 ; h< 10; h++)
							{
							if( i==g || i==h )
							{
								if ( n==g || n==h)
								{
									else
							{
							putchar(m[i]);
							putchar(m[n]);
							putchar(' ');
							putchar(m[g]);
							putchar(m[h]);
							if (i < 8)
								{
								putchar(',');
								putchar(' ');
								}
								}
								}
							}
							}
						}


		}

	};
	putchar('\n');
	return (0);
}
