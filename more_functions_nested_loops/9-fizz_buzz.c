# include <stdio.h>
/**
 * start - guess it
 *
 * Return:  0 if Succeess
*/

int main(void)
{
	char i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ( !(i % 3) )
		{
			if (!(i % 5))
				printf("FizzBuzz ");
			else 
				printf("Fizz ");
		}
		else if ( !(i % 5) && i % 3)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
