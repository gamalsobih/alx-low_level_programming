#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
    {
        int x=0,
        va_list m;
        va_start(m,n);
        for(int i =0 ;i<n ; i++)
    	{
            int o =va_arg(m,int);
            x=x+o;
        }
        va_end(m);
        return(x);

    }
