#include "lists.h"
/**
define this is a print list function
returne te returne is a x
     char *str;
    unsigned int len;
    struct list_s *next;
*/
size_t print_list(const list_t *h)
{
    size_t x = 0;
    while (h != NULL)
    {
        if(h->str == NULL)
        {
			printf("[%d] %s\n", 0, "(nil)");

        }
        else
        {
			printf("[%d] %s\n", h->len, h->str);
        }
        h=h->next;
        x++;
    }
    return(x);
}

