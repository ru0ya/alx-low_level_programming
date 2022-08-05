#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
          int i;
       
          va_list ap;
           va_start(ap, n);
           for (i = 0; int i < n; i++)
            {
            if (separator && i < n -1)
                 printf(“%s”, separator); 
            }
             printf(“\n”);
            va_end(ap);
            
}
