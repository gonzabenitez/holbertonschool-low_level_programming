# include "main.h"
# include <stdlib.h>

/**
 * string_nconcat - Something useful :)
 *@s1: string to be measured
 *@s2: string
 *@n: int
 * Return: Always 0 (Succeess)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, t;
	char *dest;

	if (s1 != NULL)
		s =(int) _strlen(s1) + 1;
	else
		s = 0;
	if (s2 != NULL)
		t =(int) _strlen(s2);
	else
		t = 0;
	if (s + t == 0)
	{
		dest = malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
	}
	else
	{
		if (n >= t)
			n = t;
	}

	dest = malloc(s + n);

	if (dest != NULL)
	{
		for (i = 0; i < s; i++)
			dest[i] = s1[i];
		for (i = 0; i < n; i++)
			dest[i + s] = s2[i];
		dest[n + s] = '\0';
	}

	return (dest);

}

/**
 * _strlen - returns len of  string
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
