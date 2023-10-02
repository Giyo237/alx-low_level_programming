#include <stdlib.h>
#include <stdio.h>

int _atoi(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            break;
        }
        i++;
    }

    return result * sign;
}

int main() {
    char str[] = "-1234";
    int num = _atoi(str);
    printf("%d\n", num);
    return 0;
}

