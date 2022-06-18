# include "main.h"

/**
 * reverse_array - Something useful :)
 *@a: string to be measured
 *@n: int
 * Return: Always 0 (Succeess)
*/

void reverse_array(int *a, int n)
{
	int i, f, l;

	i = 0;

	while (n > i)
	{
		n--;

		f = a[i];
		l = a[n];

		a[n] = f;
		a[i] = l;

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
