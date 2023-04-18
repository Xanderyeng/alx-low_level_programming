#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - new struct
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* alloc memory for dog struct */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	/* alloc memory for name, owner strings */
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);

		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
		return (NULL);
	}

	/* copy values for name, age, owner to new dog struct */
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
