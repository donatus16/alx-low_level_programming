#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
	return (user);
}
