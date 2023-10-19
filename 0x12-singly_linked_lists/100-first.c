#include <stdio.h>
/**
  * print_this_first - a function that prints the
  *bellow qoute b4 the code is executed
  */
void __attribute__((constructor)) print_this_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
