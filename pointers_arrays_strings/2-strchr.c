# include "main.h"

/**
 * _strchr - Something useful :)
 *@s: string to be measured
 *@c: source string
 * Return: Always 0 (Succeess)
*/

char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int lenS = _strlenA(s);

	for (i = 0; i < lenS; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (s[i]);
	else
		return (NULL);
}

/**
 * _strlenA - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

unsigned int _strlenA(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
