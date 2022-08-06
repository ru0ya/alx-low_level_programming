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

		    if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
            }
             printf(“\n”);

            va_end(ap);

}
