# include "main.h"

/**
 * cap_string - Something useful :)
 *@dest: string to be measured
 * Return: Always 0 (Succeess)
*/

char *cap_string(char *dest)
{
	int i, j, k;
	int lenD = _strlen(dest);
	char sep[] = {9, 10, 32, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < lenD; i++)
	{
		j = i + 1;
		for (k = 12; k >= 0; k--)
		{
			if ((dest[i] == sep[k] || i == 0) && dest[j] >= 'a' && dest [j] <= 'z')
				dest[j] -= 32;
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
