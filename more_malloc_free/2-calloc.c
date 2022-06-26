# include "main.h"
# include <stdlib.h>
/**
 * _calloc - Something useful :)
 *@n: string to be measured
 *@s: size
 * Return: Always 0 (Succeess)
*/

void *_calloc(unsigned int n, unsigned int s)
{
	void *fg = NULL;
	unsigned int i;

	if (n != 0 && s != 0)
	{
		fg = malloc(s * n);
		if (fg != NULL)
		{
			for (i = 0; i < (s * n); i++)
				fg[i] = '\0';
		}
	}
	return (fg);
}

