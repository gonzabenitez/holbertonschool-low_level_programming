# include "main.h"

/**
 * string_toupper - Something useful :)
 *@dest: string to be measured
 * Return: Always 0 (Succeess)
*/

char *string_toupper(char *dest)
{
	int i;
	int lenD = _strlen(dest);

	for (i = 0; i < lenD; i++)
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
			dest[i] = dest[i] - 32;
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
