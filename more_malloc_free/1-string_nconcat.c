# include "main.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * string_nconcat - Something useful :)
 *@s1: string to be measured
 *@s2: string
 *@n: int
 * Return: Always 0 (Succeess)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, t, r;
	char *dest;
	
	if (s1 != NULL)
		s = _ustrlen(s1);
	else
		s = 0;

	if (s2 != NULL)
		t = _ustrlen(s2);
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
	
	r = s + n + 1;
	dest = malloc(r);

	if (dest != NULL)
	{
		for (i = 0; i < r; i++)
		{
			if (i < s)
				dest[i] = s1[i];
			else
			{
				if (r > 1)
					dest[i] = s2[i - s];
			}
		}
		dest[r - 1] = '\0';
	}

	return (dest);

}

/**
 * _strlen - returns len of  string
 * @s: string to be measured
 * Return: length of string
*/

unsigned int _ustrlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
