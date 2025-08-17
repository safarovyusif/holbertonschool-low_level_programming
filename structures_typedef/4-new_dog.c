#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: Length of the string
 */
static int _strlen(const char *s)
{
    int len = 0;

    while (s && s[len])
        len++;
    return (len);
}

/**
 * _strcpy - Copies a string to a buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
static char *_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - Creates a new dog and stores copies of its name and owner
 * @name: Pointer to the dog's name string
 * @age: Dog's age
 * @owner: Pointer to the owner's name string
 *
 * Return: Pointer to the new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *name_copy, *owner_copy;
    int name_len, owner_len;

    if (!name || !owner)
        return (NULL);

    d = malloc(sizeof(*d));
    if (!d)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    name_copy = malloc((name_len + 1) * sizeof(char));
    if (!name_copy)
    {
        free(d);
        return (NULL);
    }
    owner_copy = malloc((owner_len + 1) * sizeof(char));
    if (!owner_copy)
    {
        free(name_copy);
        free(d);
        return (NULL);
    }

    _strcpy(name_copy, name);
    _strcpy(owner_copy, owner);

    d->name = name_copy;
    d->age = age;
    d->owner = owner_copy;

    return (d);
}

