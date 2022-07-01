#include<stdio.h>
/**
 * main-Entry point
 * Return:0 success
*/

int main(void)
{
	for(int a='A';a<='z';a++)
	{
		a = tolower(a);
		putchar(a);
	}
	else for(int a ='a';a<='Z';a++)
	{
		a = toupper(a);
		putchar(a);
	}
	return (0);
}

