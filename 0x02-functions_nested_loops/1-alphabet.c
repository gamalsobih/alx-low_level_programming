#include "main.h"

/**
 * main - Prints main as a message.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	
	int count;

	
	for (count = 97; count < 123; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
	return (0);
}
