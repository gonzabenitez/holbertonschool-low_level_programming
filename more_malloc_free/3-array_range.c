# include "main.h"
# include <stdlib.h>
/**
 * array_range - Something useful :)
 *@min: string to be measured
 *@max: size
 * Return: Always 0 (Succeess)
*/

int *array_range(int min, int max)
{
	int *fg = NULL;
	int i, diff;

	if (min < max)
	{
		diff = max - min;
		fg = malloc(sizeof(int)*diff);
		if (fg != NULL)
		{
			diff = 0;
			for (i = min; i <= max; i++)
			{
				fg[diff] = i;
				diff++;
			}
		}
	}
	return (fg);
}

