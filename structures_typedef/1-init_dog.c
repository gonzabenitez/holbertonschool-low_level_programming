# include "dog.h"

/**
 * init_dog - Something useful :)
 *@d: pointer to an int
 *@name: pointer to other int
 *@age: sasfa
 *@owner: asdadafqaw
 * Return: Always 0 (Succeess)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;	
}
