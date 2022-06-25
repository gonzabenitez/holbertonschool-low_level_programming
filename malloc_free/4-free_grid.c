# include "main.h"
# include <stdlib.h>
/**
 * free_grid - Something useful :)
 *@grid: string to be measured
 *@h: source string
 * Return: Always 0 (Succeess)
*/

void free_grid(int **grid, int h)
{
	int i;

	if (grid != NULL && h > 0)
	{
		for (i = 0; i < h; i++)
			free(grid[i]);
		free(grid);
	}

}

