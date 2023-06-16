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
	if (dig < 6 && !=0)
	printf("Last digit of %d is %d and is less than 6 and not 0");
	else if (dig == 0)
	printf("Last digit of %d is 0 and is 0");
	else
	printf("Last digit of %d is %d  and is greater than 5");
	return (0);
}
