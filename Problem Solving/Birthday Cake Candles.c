#include <stdio.h>

#define MAX_CANDLES 100000

int findTallestCandles(int candles[], int n) {
    int count = 0;
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (candles[i] == max)
            count++;
        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        }
    }
    return count;
}

int main () {
    int candles[MAX_CANDLES], n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &candles[i]);
    printf("%d", findTallestCandles(candles, n));
    return 0;
}
