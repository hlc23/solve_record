//https://zerojudge.tw/ShowProblem?problemid=a005
#include <iostream>
using namespace std;

int main() {
    int t,a1,a2,a3,a4,d1,d2;
    cin>>t;
    for (int i = 0;i < t ;i++){
        cin>> a1 >> a2 >> a3 >> a4;
        d1 = a2 - a1;
        d2 = a3 - a2;
        if (d1 == d2){
            cout<< a1 <<" "<< a2 << " "<< a3 << " "<< a4 << " "<< a4+d1 << endl;
        }
        else{
            d1 = a2/a1;
            cout<< a1 << " "<< a2 << " "<< a3 << " "<< a4 << " "<< a4*d1 << endl;
        }
    }

    return 0;
}
