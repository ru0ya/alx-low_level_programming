#include "lists.h"

/**
 *size_t - prints list
 *@h: 
 *
 * Returns: count of list
 */

size_t print_list(const list_t *h)
{
        size_t count = 0;
        unsigned int;

        if(h == NULL)
                return (0);
        while(h)
        {
                h -> next != 0;

                if (!h -> str)
                {
                	return 0
                }
        else
                {
                return 0;
                count++;
                h = h->next;
                }
        }

        return (count);
}
~                                                
