#include <stdlib.h>
#include <time.h>
#include<stdio.h>


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d Last digit of %d",n);
	if(n>5)
{	
	printf("%d and is greater than 5%d\n",n);
}
	else if(n==0)
{
	printf("%d and is 0 %d\n", n);
}
	else 
{
	printf("%d
	
	return (0);
}
