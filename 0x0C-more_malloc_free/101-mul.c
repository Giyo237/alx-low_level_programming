#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isPositiveNumber(char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return (0);
        }
        str++;
    }
    return (1);
}

int multiplyNumbers(int num1, int num2) {
    return (num1 * num2);
}

int main(int argc, char *argv[]) {
    int num1, num2, result;
    char *num1Str, *num2Str;

	if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

     num1Str = argv[1];
     num2Str = argv[2];

    if (!isPositiveNumber(num1Str) || !isPositiveNumber(num2Str))
    {
	    printf("Error\n");
	exit(98);
    }
    num1 = atoi(num1Str);
    num2 = atoi(num2Str);

    result = multiplyNumbers(num1, num2);

    printf("%d\n", result);
    return 0;
}
