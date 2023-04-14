#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memory 
 * @b: the size to allocates
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
