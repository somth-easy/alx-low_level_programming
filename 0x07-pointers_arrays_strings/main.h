#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*)[]);
void print_diagsums(int *, int);
int _putchar(char);

#endif /*MAIN_H*/
