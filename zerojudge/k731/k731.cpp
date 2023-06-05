#include<bits/stdc++.h>
using namespace std;

struct Move{
    int from_x, from_y, to_x, to_y;
    int d;
    /*
    d: {1: x+, 2: x-, 3: y+, 4:y-}
    */
   Move(){}
   Move(int from_x, int from_y, int to_x, int to_y){
    if (from_x != to_x){
        if (from_x < to_x) d = 1;
        else d = 2;
    }
    else{
        if (from_y < to_y) d = 3;
        else d = 4;
    }
   }
};

int x=0, y=0;
int n, tx, ty;
int tl=0, tr=0, tb=0; // turn left/right/back

void solve(){
    cin>>n;
    cin>>x>>y;
    Move m1(0, 0, x, y);
    n--;
    while (n--){
        cin>>tx>>ty;
        Move m2(x, y, tx, ty);
        if (
            (m1.d == 1 and m2.d == 3) or
            (m1.d == 2 and m2.d == 4) or
            (m1.d == 3 and m2.d == 2) or
            (m1.d == 4 and m2.d == 1))
            tl++;
        else if (
            (m1.d == 1 and m2.d == 4) or
            (m1.d == 2 and m2.d == 3) or
            (m1.d == 3 and m2.d == 1) or
            (m1.d == 4 and m2.d == 2))
            tr++;
        else if (
            (m1.d == 3 and m2.d == 4) or
            (m1.d == 4 and m2.d == 3) or
            (m1.d == 1 and m2.d == 2) or
            (m1.d == 2 and m2.d == 1))
            tb++;
        m1 = m2;
        x = tx;
        y = ty;
    }
    cout<<tl<<" "<<tr<<" "<<tb<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}