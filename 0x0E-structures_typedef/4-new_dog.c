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
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
