#include "variadic_functions.h"
/**
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
      int i;
       char string;
       
         va_list ap;
         va_start(ap, n);
       for (i = 0; i < n ; i ++)
         {  
            if (separator ≠ NULL )
printf(“%s”, separator);
if(!string)
 printf(“nil”);
printf(“%s”, va_arg(ap, unsigned int));
}
printf(“\n”);
va_end(ap);
}
