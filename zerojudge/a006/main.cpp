#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c, R;
    cin>>a>>b>>c;
    R = pow(b, 2)-4*a*c;
    if (R>0){
        int x1 =(-1*b+pow(R, 0.5))/2*a,
            x2 =(-1*b-pow(R, 0.5))/2*a;
        if (x1 > x2) cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
        else cout<<"Two different roots x1="<<x2<<" , x2="<<x1<<endl;
    }
    else if (R==0) cout<<"Two same roots x="<<(-1*b)/(2*a)<<endl;
    else cout<<"No real root"<<endl;
    return 0;
}