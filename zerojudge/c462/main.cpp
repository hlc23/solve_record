#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string text;
    // input
    cin>>k;
    cin>>text;
    long long int size = text.size();
    
    for (int i=0 ; i < size ;i++){
        int n = (int)text[i];
        if (n>=97 and n<=122){
            //小寫英文字母範圍為97(a)~122(z)
            text[i] = '0';
        }
        if (n>=65 and n<=90){
            //大寫字母範圍為65(A)~90(Z)
            text[i] = '1';
        }
    }

    for (int i=0;i<=size-k+1;i++){
        int temp = 0;
        for (int j = 0;j<k; j++){
            temp += (int)text[i+j]-48;
            }
        cout<<temp<<" "<<endl;

    }

    return 0;
}