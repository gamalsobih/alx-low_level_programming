#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	if (min > max)
        return (null);
    int rang = max - min +1 ;
    int i = 0;
    p =malloc(sizeof(rang) * rang);
    if (p == null)
        return (null);
        for (min ; min<=max ; min++)
        {
            p[i] = min;
        i++;
        }
        return (p);
    
}
