# include <stdio.h>

/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	int i, a, b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else	
	{
		a = *argv[1] - 48;
		b = *argv[2] - 48;
		printf("%d\n", a * b);	
		return (0);
	}
}
