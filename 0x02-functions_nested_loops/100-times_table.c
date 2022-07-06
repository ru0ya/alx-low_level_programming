#include"main.h"
#include<string.h>

/**
 * panctuate - format the output
 * @n: number of spaces
*/

void panctuate(int n)
{
	int panct;

	_putchar(',');
	for (panct = 0; panct < n; panct++)
	{
		_putchar(' ');
	}
}
