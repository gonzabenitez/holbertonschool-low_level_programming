# include "dog.h"
# include <stdio.h>
/**
 * print_dog - Something useful :)
 *@d: pointer to an in
 * Return: Always 0 (Succeess)
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
