#include <stdio.h>

#define TF 100

int main () {
    char ch, s[TF], sen[TF];
    
    scanf("%c %s %[^\n]", &ch, &s, &sen);
    printf("%c\n%s\n%s", ch, s, sen);
    
    return 0;
}
