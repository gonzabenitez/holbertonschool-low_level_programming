# include "main.h"
# include <stdio.h>

/**
 * _strpbrk - Something useful :)
 *@s: string to be measured
 *@accept: who knows
 * Return: Always 0 (Succeess)
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k, j;
	char *p;

	p = NULL;
	i = 0;
	j = 0;

	while (accept[j] != '\0')
	{
		j++;
	}

	while (s[i] != '\0')
	{

		for (k = 0; accept[k] != '\0' && s[i + k] == accept[k]; k++)
		{
			if (s[i + k] == accept[k])
			{
				continue;
			}
			else
				break;

		}
		if (k == j)
		{
			p = &s[i - k];
			break;
		}
		i++;
	}
	return (p);
}
