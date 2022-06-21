# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	long a = 0;
	int i;
	char f = '\0';
	char *p;

	p = &f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a += strtol(argv[i], &p, 10);
		if (*p != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}

		printf("%ld\n", a);

		return (0);
}

