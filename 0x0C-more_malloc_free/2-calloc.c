#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - function that allocates memory for an array
* @nmemb: number of elements
* @size: size of type
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
