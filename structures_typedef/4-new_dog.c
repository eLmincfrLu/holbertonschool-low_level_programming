#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
size_t len;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

/* allocate and copy name */
if (name != NULL)
{
len = strlen(name) + 1;
name_copy = malloc(len);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
strcpy(name_copy, name);
d->name = name_copy;
}
else
d->name = NULL;

/* allocate and copy owner */
if (owner != NULL)
{
len = strlen(owner) + 1;
owner_copy = malloc(len);
if (owner_copy == NULL)
{
free(d->name);
free(d);
return (NULL);
}
strcpy(owner_copy, owner);
d->owner = owner_copy;
}
else
d->owner = NULL;

/* assign age */
d->age = age;

return (d);
}
