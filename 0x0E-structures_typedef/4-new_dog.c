#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - to find length of a string
 * @s: string
 * Return: 1
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	return (count);
}

/**
 * *_strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointyer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: element1
 * @age: element2
 * @owner: element3
 * Return: pointer to the allocated space
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

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
