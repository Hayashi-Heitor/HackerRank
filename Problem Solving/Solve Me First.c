#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

int main () {
    int a, b;
    
    scanf("%d%d", &a, &b);
    printf("%d", solveMeFirst(a, b));
    return 0;
}
