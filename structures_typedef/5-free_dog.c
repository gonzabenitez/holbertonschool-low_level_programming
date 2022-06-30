# include "dog.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * free_dog - Something useful :)
 *@d: dog
 * Return: Always 0 (Succeess)
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free();
}
