#include "function_pointers.h"
/**
*    main = print f
*       returne 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && action)
    {
            for(int i = 0 ; i<size ; i++)
            {
                    action(array[i])
            }
    }
}


