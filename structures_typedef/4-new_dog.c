# include "dog.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * new_dog - Something useful :)
 *@name: name
 *@age: age
 *@owner: owner
 * Return: Always 0 (Succeess)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *zeus = NULL;

	zeus = malloc(sizeof(dog_t));
	if (zeus != NULL)
	{
		zeus->name = _strdup(name);
		zeus->age = age;
		zeus->owner = _strdup(owner);
		if (zeus->name == NULL || zeus->owner == NULL)
		{
			free(zeus->name);
			free(zeus->owner);
			free(zeus);
		}
	}
	else
		free(zeus);
	return (zeus);
}

/**
 * _strdup - Something useful :)
 *@str: string to be measured
 * Return: Always 0 (Succeess)
*/

char *_strdup(char *str)
{
	int i, s;
	char *dest;

	if (str != NULL)
		s = _strlen(str) + 1;
	else
		s = 0;
	if (s == 0)
		dest = NULL;
	else
		dest = malloc(s);

	if (dest != NULL)
	{
		for (i = 0; i < s; i++)
			dest[i] = str[i];
	}
	return (dest);

}

/**
 * _strlen - returns len of a string
 * @s: string to be measured
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
