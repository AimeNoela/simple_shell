#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr); /* free the memory pointed to */
		*ptr = NULL; /* set the ponter to null */
		return (1);
	}
	return (0);
}
