# include "main.h"

/**
 * _memset - Something useful :)
 *@s: string to be measured
 *@b: source string
 *@n: int 
 * Return: Always 0 (Succeess)
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
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
