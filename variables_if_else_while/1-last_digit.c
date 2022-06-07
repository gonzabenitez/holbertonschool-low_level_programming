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
	int n, lDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDig = n % 10;
	printf("Last digit of %d is ", n);
		
	if (lDig > 5)
		printf("%d and is greater than 5\n", lDig);
	else if (lDig < 6 && lDig != 0)
		printf("%d and is less than 6 and not 0\n", lDig);
	else if (lDig == 0)
		printf("%d and is 0\n", lDig);
	return (0);
}
