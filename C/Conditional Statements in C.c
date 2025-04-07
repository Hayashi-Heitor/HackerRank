#include <stdio.h>

#define TF 10

int main () {
    char numbers[TF][8] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int input;
    
    scanf("%d", &input);
    if (input < 10) {
        printf("%s", numbers[input - 1]);
    }
    else
        printf("Greater than 9");
    return 0;
}
