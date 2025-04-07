#include <stdio.h>

#define TF 10

int main() 
{
    int a, b;
    char numbers[TF][9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	
    for(; a < b + 1; a++) {
        if (a < 10)
            printf("%s\n", numbers[a - 1]);
        else {
            if (a % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
        
    }

    return 0;
}

