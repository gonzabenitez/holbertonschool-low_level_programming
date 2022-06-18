# include "main.h"

/**
 * _strspn - Something useful :)
 *@s: string to be measured
 *@accept: who knows
 * Return: Always 0 (Succeess)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{

		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				j++;
				break;
			}
		}
		i++;
	}
	return (j);
}
