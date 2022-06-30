
# include "3-calc.h"
# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
/**
 * get_op_func - Something useful :)
 *@s: dog
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL,NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == *(ops[i].op))
			break;
		i++;
	}
	return (ops[i].f);
}
