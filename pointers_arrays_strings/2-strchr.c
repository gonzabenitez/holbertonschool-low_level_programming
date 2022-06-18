# include "main.h"
# include <stdio.h>
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
	char *p;

	pointnull(&p);

	for (i = 0; i < lenS; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	return (p);
}
/**
 * pointnull - claim your prize if you guess it ;)
 * @p: ponter to be pointed to null
 * Return: void
*/

void pointnull(char **p)
{
	*p = NULL;
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
