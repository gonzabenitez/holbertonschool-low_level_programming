# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * print_name - Something useful :)
 *@name: dog
 *@f: function
 * Return: Always 0 (Succeess)
*/

void print_name(char *name, void (*f)(char *))
{
	if (*f != NULL)
		(*f)(name);
}
