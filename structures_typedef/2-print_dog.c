#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the dog to print
 *
 * Description: if a member is NULL, prints (nil) instead
 *              if d is NULL, prints nothing
 */
void print_dog(struct dog *d);
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nill)");
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nill)");
}
