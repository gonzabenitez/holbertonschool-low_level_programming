# include <stdio.h>
# include "main.h"
/**
 * print_to_98 - guess it
 *@i: whre to count from
 *
 * Return: Always 0 (Succeess)
*/

void print_to_98(int i)
{
	int j;

	if (i > 98)
		j = -1;
	else
		j = 1;

	while (i != 98)
	{
		printf("%d, ", i);
		i += j;
	}
	printf("%d\n", 98);

}
