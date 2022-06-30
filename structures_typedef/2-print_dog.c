# include "dog.h"
# include <stdio.h>
/**
 * print_dog - Something useful :)
 *@d: pointer to an in
 * Return: Always 0 (Succeess)
*/

void print_dog(struct dog *d)
{
	char **n, **o;
	char *nil = "(nil)";

	if (d != NULL)
	{
		if ((*d).name != NULL)
			n = &(*d).name;
		else
			n = &nil;
		if ((*d).owner != NULL)
			o = &(*d).owner;
		else
			o = &nil; 
		printf("Name: %s\nAge: %f\nOwner: %s\n", *n, (*d).age, *o);
	}
	else
		printf("\n");
}
