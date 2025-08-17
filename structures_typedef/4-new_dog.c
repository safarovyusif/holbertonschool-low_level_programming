#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Compute the length of a string.
 * @s: The string.
 *
 * Return: Length of @s.
 */
static int _strlen(const char *s)
{
    int len = 0;

    while (s && s[len])
        len++;
    return (len);
}

/**
 * _strcpy - Copy a string to a destination buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to @dest.
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
 * new_dog - Create a new dog, storing copies of name and owner.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: Pointer to the new dog_t, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *ncopy, *ocopy;
    int nlen, olen;

    if (!name || !owner)
        return (NULL);

    d = malloc(sizeof(*d));
    if (!d)
        return (NULL);

    nlen = _strlen(name);
    olen = _strlen(owner);

    ncopy = malloc((nlen + 1) * sizeof(char));
    if (!ncopy)
    {
        free(d);
        return (NULL);
    }
    ocopy = malloc((olen + 1) * sizeof(char));
    if (!ocopy)
    {
        free(ncopy);
        free(d);
        return (NULL);
    }

    _strcpy(ncopy, name);
    _strcpy(ocopy, owner);

    d->name = ncopy;
    d->age = age;
    d->owner = ocopy;

    return (d);
}

