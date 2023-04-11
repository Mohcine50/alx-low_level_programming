#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create and array of charrs
 * @size: size of array
 * @c: char for initialization
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(sizeof(char) * size);
	int i;

	if (size == 0)
		return (0);


	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
