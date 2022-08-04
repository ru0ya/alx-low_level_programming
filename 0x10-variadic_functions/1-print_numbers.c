#include "variadic
void print_numbers(const char *separator, const unsigned int n, ...)
{
          int i;
       
          va_list ap;
           va_start(ap, n);
           for (i = 0; int i < n; i++)
            {
            if (seperator != NULL)
                 printf(“%s”, seperator); 
                printf(“%d”, va_arg(ap, int));
            }
             print(“\n”);
            va_end(ap);
            
}
