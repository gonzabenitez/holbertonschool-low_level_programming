# include <stdio.h>

/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
		printf("%d\n", argc);
	return (0);
}
