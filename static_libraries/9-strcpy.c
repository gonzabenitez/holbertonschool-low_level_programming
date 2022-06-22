# include "main.h"

/**
 * _strcpy - Something useful :)
 *@dest: string to be measured
 *@src: source string
 * Return: Always 0 (Succeess)
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
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
