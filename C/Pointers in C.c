#include <stdio.h>

void update(int *a,int *b) {
    int temp;
    
    temp = *a;
    *a = *a + *b;
    if (*b > temp)
        *b = *b - temp;
    else
        *b = temp - *b; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
