#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H


#include<stdio.h>
#include<stdlib.h>

int _putchar(char c);

int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));


#endif /*FUNCTION_POINTERS_H*/
