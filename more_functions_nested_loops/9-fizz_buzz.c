# include <stdio.h>
/**
 * main- guess it
 *
 * Return:  0 if Succeess
*/

int main(void)
{
	char i, j;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (!(i % 3))
		{
			if (!(i % 5))
				printf(" FizzBuzz");
			else
				printf(" Fizz");
		}
		else if (!(i % 5) && i % 3)
			printf(" Buzz");
		else
		{
			if (i > 1)
				j = ' ';
			else 
				j = '';

			printf("%c%d", j, i);
		}
	}
	putchar('\n');
	return (0);
}
