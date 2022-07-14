#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 * Created by: Jonah Jockthan
 * cc: 14th july, 2022
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		for ( ; i < n; i++)
			dest[i] = '\0';
	return (dest);
}
