#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: this is decription
 *
 * Return: always return(0) succes
 */
int main(void)
{
	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
	if (dig > 5)
	printf("%dig is greater than 5");
	else if (dig == 0)
	printf("%dig is zero");
	else
	printf("%dig less than 6");
	return (0);
}
