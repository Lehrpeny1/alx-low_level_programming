#include <stdlib.h>
#include "main.h"

 /**
  * *create_array - Creates an array of chars dynamically
  * and initializes it with a specific char
  * @size: size of the array to create
  * @c: char to initialize the array c
  *
  * Return: pointer to the array (Success), NULL (Error)
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
