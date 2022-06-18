# include "main.h"

/**
 * _strncmp - Something useful :)
 *@dest: string to be measured
 *@src: source string
 * Return: Always 0 (Succeess)
*/

int *_strncmp(char *dest, char *src)
{
	int i, n;
	int diff;
	int lenS = _strlen(src);
	int lenD = _strlen(dest);

	if (lenS > lenD)
		n = lenS;
	else if (lenD > lenS)
		n = lenD;
	else
		if (lenS == lenD && lenS > 0)
			n = lenS;
		else
			n = 0;
	diff = n;

	for (i = 0; i < n; i++)
	{
		diff = dest[i] - src[i];
		if (! diff)
			continue;
		else
			break;
	}
	return (diff);
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
