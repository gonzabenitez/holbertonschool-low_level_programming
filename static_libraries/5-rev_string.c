# include "main.h"

/**
 * rev_string - Something useful :)
 *@s: string to be measured
 * Return: Always 0 (Succeess)
*/

void rev_string(char *s)
{
	int i, j;
	int len = _strlen(s);
	char f, l;

	j = len - 1;
	i = 0;

	while (j >= i)
	{
		f = s[i];
		l = s[j];

		s[j] = f;
		s[i] = l;

		j--;
		i++;
	}

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
