# include "main.h"
# include <stdlib.h>
/**
 * create_array - Something useful :)
 *@s: string to be measured
 *@c: source string
 * Return: Always 0 (Succeess)
*/

char *create_array(unsigned int s, char c)
{
	unsigned int i;
	char *dest;
	if (s == 0)
		dest = NULL;
	else
		dest = malloc(s);

	if (dest != NULL)
	{
		for (i = 0; i < s; i++)
			dest[i] = c;
	}
	return (dest);
}

