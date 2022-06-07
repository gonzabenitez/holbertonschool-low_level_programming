# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
*/

int main(void)
{
	int a, b;

	for (a = '0' ; a <= '?' ; a++)
		if (a > 57)
		{
			b = a + 39;
			putchar (b);
		}
		else
			putchar(a);
	putchar('\n');
	return (0);
}
