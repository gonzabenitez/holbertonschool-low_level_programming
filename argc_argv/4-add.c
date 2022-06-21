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
	long a = 0;
	int i, errno;

	if (argc < 2)
	{
		printf("0");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		errno = 0;
		a += strtol(argv[i], NULL, 10);
		if (errno != 0)
		{
			printf("Error\n");
			return (1);
		}
	}

		printf("%ld\n", a);

		return (0);
}

