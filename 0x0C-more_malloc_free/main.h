#define MAIN_H
#ifdef	MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

void *malloc_checked(unsigned int );
char *string_nconcat(char *, char *, unsigned int );
void *_calloc(unsigned int , unsigned int );
int *array_range(int , int );

#endif /*MAIN_H*/
