# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
/**
 * array_iterator - Something useful :)
 *@arr: dog
 *@s: function
 *@action: something
 * Return: Always 0 (Succeess)
*/

void array_iterator(int *arr, size_t s, void (*action)(int))
{
	size_t i;

	if (*action != NULL && s > 0 && arr != NULL)
	{
		for (i = 0; i < s; i++)
			(*action)(arr[i]);
	}
}
