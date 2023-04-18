#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to name string
 * @age: age of the dog
 * @owner: pointer to owner string
 *
 * Return: pointer to new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0;
	dog_t *new_dog = NULL;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (int i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_len] = '\0';

	for (int i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_len] = '\0';

	new_dog->age = age;

	return (new_dog);
}
