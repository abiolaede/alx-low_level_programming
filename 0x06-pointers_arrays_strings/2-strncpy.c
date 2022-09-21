#include "main.h"
/**
 * _strncpy - function that copy a string
 * @dest: buffer storing the string copied
 * @src: the source string
 * Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i =0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	
	return (dest);
}
	 