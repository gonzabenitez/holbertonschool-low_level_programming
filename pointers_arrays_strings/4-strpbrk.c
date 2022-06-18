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
	unsigned int i, k;
	char *p;

	p = NULL;
	i = 0;

	while (s[i] != '\0')
	{

		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				p = &s[i];
				break;
			}


		}
		if (p != NULL)
			break;
		i++;
	}
	return (p);
}
