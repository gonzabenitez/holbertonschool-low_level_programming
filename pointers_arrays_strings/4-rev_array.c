# include "main.h"

/**
 * rev_array - Something useful :)
 *@a: string to be measured
 *@n: int 
 * Return: Always 0 (Succeess)
*/

void rev_array(int *a, int n)
{
	int i, f, l;

	i = 0;

	while (n >= i)
	{
		f = a[i];
		l = a[n];

		s[n] = f;
		s[i] = l;

		n--;
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
