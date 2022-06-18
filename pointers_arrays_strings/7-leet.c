# include "main.h"

/**
 * leet - Something useful :)
 *@dest: string to be measured
 * Return: Always 0 (Succeess)
*/

char *leet(char *dest)
{
	int i, j, k;
	char sep[] = {'O', 'L', '~', 'E', 'A', '~', '~', 'T'};

	i = 0;
	while (dest[i] != '\0')
	{

		for (k = 0; k < 8; k++)
		{
			j = k + '0';

			if (dest[i] == sep[k] || dest[i] == sep[k] + 32)
				dest[k] = j;
		}
		i++;
	}
	return (dest);
}
