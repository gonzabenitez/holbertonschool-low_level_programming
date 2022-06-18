# include "main.h"

/**
 * print_chessboard - Something useful :)
 *@a: string to be measured
 * Return: Always 0 (Succeess)
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;
	i = 0;

	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		j++;
		_putchar('\n');
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
