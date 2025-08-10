#include "main.h"

/**
 * _memcpy - yaddas sahesini copy ediyir
 * @dest: destination
 * @src: source
 * @n: baytlarimizin sayi hehe
 *
 * Return: returun dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
