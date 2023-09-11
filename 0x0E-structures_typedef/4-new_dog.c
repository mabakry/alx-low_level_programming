#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - calculate string length
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy - copy string
 * @a: 1st string
 * @b: 2nd string
 * Return: a
 */
char *_strcpy(char *a, char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/**
 * *new_dog - creates a new dog.
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
