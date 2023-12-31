#ifndef more_malloc
#define more_malloc

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
int _strlen(char *s);
int is_digit(char *c);
int validate(char *num1, char *num2);

#endif
