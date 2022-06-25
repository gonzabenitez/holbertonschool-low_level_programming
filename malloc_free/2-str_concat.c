# include "main.h"
# include <stdlib.h>

/**
 * str_concat - Something useful :)
 *@s1: string to be measured
 *@s2: other string
 * Return: Always 0 (Succeess)
*/

char *str_concat(char *s1, char *s2)
{
	int i, s, t;
	char *dest;

	if (s1 != NULL)
		s = _strlen(s1);
	else
		s = 0;
	if (s2 != NULL)
		t = _strlen(s2) + 1;
	else
		t = 0;

	if (s + t == 0)
	{
		dest = malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
	}
	else
		dest = malloc(s + t);

	if (dest != NULL)
	{
		for (i = 0; i < s; i++)
			dest[i] = s1[i];
		for (i = 0; i < t; i++)
			dest[s + i] = s2[i];
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
