#include "main.h"
/**
* is_prime_number - function that returns prime
* @n: operant
* Return: prime
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n-1));
}
/**
* prime - function that returns prime
* @n: operant
* @p: iterator 
*Return: prime
*/
int prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (prime(n, p-1));
}

