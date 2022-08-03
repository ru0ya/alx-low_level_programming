#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * Desc: header file containing all prototypes
 * used in the 0x-pointer directory`
 */

#include<stdlib.h>


int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));


#endif
