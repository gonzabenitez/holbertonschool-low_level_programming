# include <stdio.h>

/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", *argv[i]);
	return (0);
}
