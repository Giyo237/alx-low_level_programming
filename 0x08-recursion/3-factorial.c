#include "main.h"
/**
* factorial - function to calculate the factorial of a number
* Return: the factorial
*@n: the factorial operant
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n <= 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
