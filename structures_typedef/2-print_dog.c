#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: dog
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
	else if (d == NULL)
{
	strcpy(d->name, "(nil)");
	strcpy(d->owner, "(nil)");
}
}
