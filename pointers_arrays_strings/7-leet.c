# include "main.h"

/**
 * leet - Something useful :)
 *@dest: string to be measured
 * Return: Always 0 (Succeess)
*/

char *leet(char *dest)
{
	int i, j, k;
	int lenD = _strlen(dest);
	char sep[] = {'O', 'L', '~', 'E', 'A', '~', '~', 'T'};

	for (i = 0; i < lenD; i++)
	{

		for (k = 7; k >= 0; k--)
		{
			j = k + '0';

			if (dest[i] == sep[k] || dest[i] == sep[k] + 32)
				dest[k] = j;
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
