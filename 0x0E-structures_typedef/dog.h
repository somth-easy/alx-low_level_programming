#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct dog - entry point
 * @owner: member one
 * @name: member two
 * @age: member three
 */

struct dog
{
	char *owner;
	char *name;
	float age;
};

/*
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*DOG_H*/
