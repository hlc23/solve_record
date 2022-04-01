#include <bits/stdc++.h>
using namespace std;

/*
1刀分2塊
2刀分4塊
3刀分7塊
n刀分n-1刀所分的數量加上n

a1 = 2
a2 = 4
a3 = 7 = a2 + 3
a4 = 11 = a3 + 4
an = a(n-1) +n
an = 2 + 4 + ((n-2)(3+n))/2
*/

int main() {
    long long int N;
    while(cin>>N){
        if (N<0){
            break;
        }
        else if(N == 1){
            cout<<2<<endl;
        }
        else if(N == 2){
            cout<<4<<endl;
        }
        else{
            cout<< 4 + ((N-2)*(3+N))/2<<endl;
        }
    }
    return 0;
}
