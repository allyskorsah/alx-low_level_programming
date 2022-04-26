#include "main.h"

/**
 *_memcpy - copies bytes from  src memory area to dest memory area
 *@dest: destination area memory
 *@src: source memory area
 *@n: data
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0
		;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
