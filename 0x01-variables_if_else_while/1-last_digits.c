#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - A program that asssigns random numbers to variable n
 * Return: 0 if suceful
 */
int main(void)
{
	 int n;
	 int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	if (n > 5)
		printf("Last digits of %d is %d and is greater than 5\n", n, r);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, r);
	else
	(n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
return (0);
}
