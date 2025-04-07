#include <stdio.h>

int main () {
    int number;
    int result;

    result = 0;
    scanf("%d", &number);
    while (number / 10 > 0) {
        result += number % 10;
        number = number / 10;
    }
    result += number;
    printf("%d", result);
    return 0;
}
