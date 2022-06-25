# include "main.h"
# include <stdlib.h>

/**
 * alloc_grid - Something useful :)
 *@w: string to be measured
 *@h: other string
 * Return: Always 0 (Succeess)
*/

int **alloc_grid(int w, int h)
{
	int i, s, t;
	int **dest;

	if (w <= 0 || h <= 0)
		dest = NULL;
	else
	{
		dest = malloc(sizeof(int *) * h);
		if (dest != NULL)
		{
			for (i = 0; i < h; i++)
			{	
				dest[i] = malloc(sizeof(int) * w);
				if (dest[i] != NULL)
				{
					for (s = 0; s < w; s++)
						dest[i][s] = 0;
				}
				else
				{
					for (t = i - 1; t >= 0; t--)
						free(dest[t]);
					free(dest);
					break;
				}

			}
		}
	}
	return (dest);

}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
