#ifndef fpoint
#define fpoint
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
void print_name(char *, void(*f)(char *));
void array_iterator(int *arr, size_t s, void (*action)(int))
#endif
