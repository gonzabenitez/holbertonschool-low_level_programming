# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
/**
 * main - Something useful :)
 *@argc: dog
 *@argv: function
 * Return: Always 0 (Succeess)
*/

int main(int argc,char *argv[])
{
	int op_a, op_b, r, res = 0;
	char op;

	if (argc < 4 && argv != NULL)
	{
		op_a = atoi(argv[1]);
		op = *argv[2];
		op_b = atoi(argv[3]);
		r = (*(get_op_func(op))(op_a, op_b));
		printf("%d",r);
	}
	else 
		res = -1;
	return (res);
}
