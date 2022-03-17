#include <iostream>
using namespace std;

int main() {
    int n ,score;
    float o;
    while (cin>>n){
        o = 0;
        for (int t = 0;t<n;t++){
            cin>>score;
            o += score;
        }
        o /= n;

        if (o > 59){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

    return 0;
}

