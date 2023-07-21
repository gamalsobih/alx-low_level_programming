#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    int x=0;
    va_list m;
    if (n == 0)
    return (0);
    va_start(m,n);
    for(int i =0 ;i<n ; i++)
    {
    x+=va_arg(m,int);
    }
    va_end(m);
    return(x);

}
