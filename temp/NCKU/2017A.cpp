#include<bits/stdc++.h>
using namespace std;

int T;
string text;

signed main(){
    cin>>T;
    getline(cin, text);
    for (int i=0; i<T; i++){
        int N=0, C=0, K=0, U=0, S=0, I=0, E=0;
        getline(cin, text);
        for (auto w = text.begin(); w != text.end(); w++){
            switch (*w){
                case 'N':
                N++; break;
                case 'C':
                C++; break;
                case 'K':
                K++; break;
                case 'U':
                U++; break;
                case 'S':
                S++; break;
                case 'I':
                I++; break;
                case 'E':
                E++; break;
            }
        }
        cout<<min(N, min(C/2, min(K, min(U, min(S, min(I, E))))))<<"\n";
    }
    return 0;
}
