#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: size 
 * @c: char 
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (i < size)
{
	ar[i] = c;
	i += 1;
}
return (ar);
}