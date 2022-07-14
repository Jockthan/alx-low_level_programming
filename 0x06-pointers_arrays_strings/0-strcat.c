#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen])
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
