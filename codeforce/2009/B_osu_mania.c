#include<stdio.h>

int main(){
    int t, n;
    int a[505];
    char s[5];
    scanf("%d", &t);
    while (t--){ // count test case
        scanf("%d", &n); // n
        for (int i=0; i<n; i++){ // get n line
            scanf("%s", s);
            for (int j=0; j<4; j++){ // search for #
                if (s[j] == '#') a[i] = j+1;
            }
        }
        for (int i=n-1; i >=0; i--) printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}