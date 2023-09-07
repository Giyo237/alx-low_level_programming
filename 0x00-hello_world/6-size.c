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
printf("Size of a char: %u bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %u bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %u bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %u bytes(s)\n", (unsigned long)sizeof(v));
printf("Size of a float: %u bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
