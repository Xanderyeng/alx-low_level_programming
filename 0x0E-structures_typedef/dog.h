#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my dear friend rex
 *
 * @name: 1st member
 * @owner: 2nd member
 * @age: 3rd member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);
typedef struct dog dog_t;

#endif
