# include "main.h"

/**
 * _memcpy - Something useful :)
 *@dest: string to be measured
 *@src: source string
 *@n: amount of bytes
 * Return: Always 0 (Succeess)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int lenS = _strlen(src);
	unsigned int lenD = _strlen(dest);

	if (lenS == 0 && lenD == 0)
		n = 0;
	else
		lenS++;

	for (i = 0; i < n; i++)
	{
		if (i < lenS)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
