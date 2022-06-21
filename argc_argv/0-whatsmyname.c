# include <stdio.h>

/**
 * main - Something useful :)
 *@argc: string to be measured
 *@argv: verctor
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	if (argc != 0)
		argc++;
	printf("%s\n",argv[0]);
	return (0);
}
