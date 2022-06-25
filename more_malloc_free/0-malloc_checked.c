# include "main.h"
# include <stdlib.h>
/**
 * malloc_checked - Something useful :)
 *@b: string to be measured
 * Return: Always 0 (Succeess)
*/

void *malloc_checked(unsigned int b)
{
	void *fg;

	fg = malloc(b);

	if (fg == NULL)
		exit(98);
	else
		return (fg);
}

