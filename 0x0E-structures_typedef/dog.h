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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
