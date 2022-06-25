# include "main.h"
# include <stdlib.h>

/**
 * _strdup - Something useful :)
 *@str: string to be measured
 * Return: Always 0 (Succeess)
*/

char *_strdup(char *str)
{
	int i, s;
	char *dest;

	s = 0;
	s = _strlen(str);
	
	if (s == 0)
		dest = NULL;
	else
		dest = malloc(s);

	if (dest != NULL)
	{
		for (i = 0; i < s; i++)
			dest[i] = str[i];
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
