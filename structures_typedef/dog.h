#ifndef DOG
#define DOG
/**
 * struct dog - Some kind of function
 * @name: name
 * @age: age
 * @owner: owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char);
#endif
