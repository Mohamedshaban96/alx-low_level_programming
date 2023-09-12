#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - creates a new dog
  *@name: 1st member.
  *@age: 2nd member.
  *@owner: 3rd member.
  *
  *Return: NULL if fail.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_Name, len_Owner;

	struct dog *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	len_Owner = 0;
	while (owner[lenO] != '\0')
		len_Owner++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_Name + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_Owner + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len_Name; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len_Owner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
