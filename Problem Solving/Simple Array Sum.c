#include <stdio.h>

#define TF 1000

int simpleArraySum(int vector[], int size) {
    int result = 0;
    
    for (int i = 0; i < size; i++)
        result += vector[i];
    
    return result;
}

int main () {
    int numbers[TF], TL;
    
    scanf("%d", &TL);
    for (int i = 0; i < TL; i++)
        scanf("%d", &numbers[i]);
    printf("%d", simpleArraySum(numbers, TL));
    
    return 0;
}
