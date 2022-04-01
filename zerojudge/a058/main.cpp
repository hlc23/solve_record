#include<iostream>
using namespace std;

int main(){
    int n,t,m,k=0,kp1=0,kp2=0;
    cin>>n;
    for (int ti = 0; ti < n; ti++){

        cin>>t;
        m = t%3;
        switch (m){
            case 0:
                k++;
                break;
            case 1:
                kp1++;
                break;
            case 2:
                kp2++;
                break;
        }
    }
    cout<< k << " " << kp1 << " " << kp2;
    return 0;
}
