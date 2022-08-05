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
            if (separator != NULL)
                 printf(“%s”, separator); 
                printf(“%d”, va_arg(ap, int));
            }
             printf(“\n”);
            va_end(ap);
            
}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
