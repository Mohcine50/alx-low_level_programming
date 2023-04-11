#include <stdlib.h>

/**
 * create_array - create and array of charrs
 * @size: size of array
 * @c: char for initialization
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (int i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
