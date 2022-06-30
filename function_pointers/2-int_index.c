# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
/**
 * int_index - Something useful :)
 *@arr: dog
 *@s: function
 *@cmp: something
 * Return: Always 0 (Succeess)
*/

int int_index(int *arr, int s, int (*cmp)(int))
{
	int i = -1;

	if (*cmp != NULL && s > 0 && arr != NULL)
	{
		for (i = 0; i < s; i++)
		{
			if ((*cmp)(arr[i]) != 0)
			{
				break;
			}
		}
		if (i == s)
			i = -1;
	}
	return (i);
}
