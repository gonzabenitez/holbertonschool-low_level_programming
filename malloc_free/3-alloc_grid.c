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
	int i, s;
	int **dest;

	if (w <= 0 || h <= 0)
		dest = NULL;
	else
	{
		dest = malloc(sizeof(int) * w * h);
		if (dest != NULL)
		{
			for (i = 0; i < h; i++)
			{	
				for (s = 0; s < w; s++)
					dest + (i * w + s) = 0;
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
