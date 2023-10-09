#include <stdio.h>
#include <stdlib.h>

/**
 * _is_digit - a function that checks for digits
 * @c: checker
 * Return: if c is digit
 */
int _is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
* main - main function
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j = 0, l1, l2;
	char *num1, *num2;
	int carry, sum, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]  != '\0'; i++)
	{
		if (!_is_digit(num1[i]))
		{
			printf("Error\n");
			return(98);
		}
	}
	for (j = 0 ; num2[j] != '\0'; j++)
	{
		if (!_is_digit(num2[j]))
		{
			printf("Error\n");
			return (98);
		}
	}
	l1 = i;
	l2 = j;

	result = malloc(sizeof(int) * (l1 + l2));

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for(i = 0; i < l1 + l2; i++)
	{
		result[i] = 0;
	}
	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i +j + 1] + carry;
		carry = sum / 10;
		result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}
		i = 0;
		while (i < l1 + l2 - 1 && result[i] == 0)
		{
			i++;
		}
		for(; i < l1 + l2; i++)
		{
			printf("%d" , result[i]);
		}
		printf("\n");

		free(result);
		return(0);
}
