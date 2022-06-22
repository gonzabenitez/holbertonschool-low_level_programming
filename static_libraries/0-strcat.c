# include "main.h"

/**
 * _strcat - Something useful :)
 *@dest: string to be measured
 *@src: source string
 * Return: Always 0 (Succeess)
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int lenS = _strlen(src);
	int lenD = _strlen(dest);

	lenS++;

	for (i = 0; i < lenS; i++)
	{
		dest[lenD + i] = src[i];
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
