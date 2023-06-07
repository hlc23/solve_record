#include<bits/stdc++.h>
#define int long long
using namespace std;

int c2i(char c){
    return c-48;
}


void solve(void){
    stack<int> loop_stack;
    string text;
    int now = 10,
        move = 0,
        temp;
    cin>>text;
    for (int i=0; i<text.size(); i++){
        if (text[i] == 'T'){
            temp = c2i(text[i+1])* 10 + c2i(text[i+2]);
            move += abs(now - temp);
            now = temp;
            i += 2;
        }
        else if (text[i] == 'L'){
            loop_stack.push(i);
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
