# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) 
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negativen\n", n);
	else 
		printf("%d is zero\n", n);
	return (0);
}
