#include<bits/stdc++.h>
#define int long long
using namespace std;

int c2i(char c){
    return c-48;
}

struct Loop{
    int times,
        pre, // pos before loop
        head, // first pos in loop
        end;
    int inside_move = 0; // move inside loop
    Loop(){}
    Loop(int t, int p, int h):times(t), pre(p), head(h){}
    int count(){
        return inside_move * times + abs(end - head) * (times - 1);
    }
};

void solve(void){
    stack<Loop> loop_stack;
    string text;
    int now = 10, next;
    int ans = 0;
    cin>>text;
    Loop l;
    for (int i=0; i<text.size();){
        if (text[i] == 'L'){
            next = c2i(text[i+3])*10 + c2i(text[i+4]);
            l = Loop(
                c2i(text[i+1]),
                now,
                next
            );
            loop_stack.push(l);
            now = next;
            i+=2;
        }
        else if (text[i] == 'T'){
            next = c2i(text[i+1])*10 + c2i(text[i+2]);
            i+=3;
            if (loop_stack.empty()){
                ans += abs(next - now);
                now = next;
                continue;
            }
            loop_stack.top().inside_move += abs(next - now);
            now = next;
        }
        else if (text[i] == 'E'){
            l = loop_stack.top();
            loop_stack.pop();
            l.end = now;
            now = l.end;
            i++;
            if (loop_stack.empty()){
                ans += l.count() + abs(l.head - l.pre);
                now = next;
                continue;
            }
            loop_stack.top().inside_move += l.count() + abs(l.head - l.pre);
            now = next;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
