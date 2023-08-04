#include "lists.h"
/**
define this is a print list function
returne te returne is a x
     char *str;
    unsigned int len;
    struct list_s *next;
*/
size_t list_len(const list_t *h){
    size_t x = 0;
    while (h != NULL)
    {
        h=h->next;
        x++;
    }
    return(x);
}


