#include <stdio.h>

int main()
{
	int a, b;
    float x, y;
    
    scanf("%d %d %f %f", &a, &b, &x, &y);
    printf("%d %d\n%.1f %.1f", a + b, a - b, x + y, x - y);
    
    return 0;
}
