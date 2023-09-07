#include <stdio.h>
/**
 * main - program that prints the computer sizes
 * Return: 0 if succeful
 */
int main(void)
{
	char a;
	int i;
	long int l;
	long long int v;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
