#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - allocates space in memory to duplicate.
 *
 * @str: given string
 *
 * Return: returns a pointer to allocated memory
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';

	return (new_str);
}

/**
 * new_dog - creates new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the dog, or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
