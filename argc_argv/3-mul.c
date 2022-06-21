# include <stdio.h>
# include <stdlib.h>
/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	long a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else	
	{
		a = strtol(argv[1]);
		b = strtol(argv[2]);
		printf("%d\n", a * b);	
		return (0);
	}
}
