#include<stdio.h>

int main(){
    int c, a, b;
    scanf("%d", &c);
    while (c--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", b-a);
    }
    

    return 0;
}