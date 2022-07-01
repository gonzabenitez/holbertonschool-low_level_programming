# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
/**
 * main - Something useful :)
 *@argc: dog
 *@argv: function
 * Return: Always 0 (Succeess)
*/

int main(int argc, char *argv[])
{
	int op_a, op_b, r, f, res = 0;
	char *op;
	char a;

	
	if (argc == 4 && argv != NULL)
	{
		a = *argv[2];
		f = strlen(argv[2]);

		if ((a != '+' && a != '-' && a != '/' && a != '*' && a != '%') || f > 1)
		{
			printf("Error\n");
			res = 99;
		}
		else if ((a == '%' || a == '/') && *argv[3] == '0')
		{
			printf("Error\n");
			res = 100;
		}
		else
		{
			op_a = atoi(argv[1]);
			op = argv[2];
			op_b = atoi(argv[3]);
			r = (*get_op_func(op))(op_a, op_b);
			printf("%d\n",r);
		}
	}
	else
	{
	res = 98;
	printf("Error\n");
	}

	return (res);
}
