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
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
char *_strdup(char *);
int _strlen(char *);
dog_t new_dog(char *, float, char *);
#endif
