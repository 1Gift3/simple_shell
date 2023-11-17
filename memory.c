#include "shell.h"

/**
 * bfree - Frees pointer and NULLs to the address
 * @ptr: Address of the pointer to be free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
