# include <stdio.h>

/**
 * _strlen - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
