#include<iostream>
#define int long long

using namespace std;

int Px, Py, Cx, Cy, Sx, Sy, Hx, Hy;
int x, y, t=0;
bool sell_x = false, sell_y = false;

signed main(){
    cin>>Px>>Py>>Cx>>Cy>>Sx>>Sy>>Hx>>Hy;
    x = Px - Cx; y = Py - Cy;
    if (x > 0) sell_x = true;
    if (y > 0) sell_y = true;
    if (sell_x) t += x*Sx;
    else t += x*Hx;
    if (sell_y) t += y*Sy;
    else t += y*Hy;
    cout<<t<<"\n";
    if (sell_x) cout<<Sx;
    else cout<<Hx;
    cout<<" ";
    if (sell_y) cout<<Sy;
    else cout<<Hy;
    return 0;
}