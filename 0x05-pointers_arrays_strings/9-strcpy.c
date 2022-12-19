#include "main.h"

/**
 * _strcp - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0
		while (*(src + len) != '\n')
		{
		*(dest + len) = *(src + len);
		len++;
		}
	*(dest + len) = '\0';
	return (dest);
}
