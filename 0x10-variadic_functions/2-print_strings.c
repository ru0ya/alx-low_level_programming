#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list ap;  
	unsigned int i;
	  char *s;



           va_start(ap, n);
           for (i = 0; i < n; i++)
            {
		    s = va_arg(ap, char *);
		    if (!s)
			    s = "(nil)";
		    if (!separator)
			    printf("%s",s);
            if (separator && i == 0)
                 printf(“%s”, s);
	    else
		    printf("%s%s", separator, s);
            }
             printf(“\n”);

            va_end(ap);

}
