#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list ap;
       	unsigned  int i;

           va_start(ap, n);

           for (i = 0; int i < n; i++)
	   {
		   printf("%d", va_arg(ap, int));
            		if (separator && i < n -1)
                		 printf(“%s”, separator); 
            }
             printf(“\n”);
            va_end(ap);
            
}
