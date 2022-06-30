# include "function_pointers.h"
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
/**
 * op_add - Something useful :)
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/

int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - Something useful :)
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - Something useful :)
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Something useful :)
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Something useful :)
 *@a: function
 *@b: param b
 * Return: Always 0 (Succeess)
*/
int op_mod(int a, int b)
{
	return (a % b);
}
