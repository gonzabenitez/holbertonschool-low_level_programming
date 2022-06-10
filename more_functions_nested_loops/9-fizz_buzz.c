# include <stdio.h>
# include "main.h"
/**
 * fizz_buzz- guess it
 *@i: amount of times
 *
 * Return:  0 if Succeess
*/

void fizz_buzz(void)
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
}
