#include "main.h"
#include <math.h>
/**
* _sqrt_recursion - function that returns the natural sqrt
*@n: operant
*Return: the square
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
/**
*_sqrt - function two
*@n:operant
*@r:iterator
*Return:sqrt
*/
int _sqrt(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_sqrt(n, r+1));
}
