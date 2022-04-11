#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dog struct
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(*d).name != NULL ? d->name : "(nil)";
		(*d).owner != NULL ? d->owner : "(nil)");

		print("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
