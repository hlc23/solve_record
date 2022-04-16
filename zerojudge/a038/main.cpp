#include <iostream>
using namespace std;

int main() {
    int n, output;
    cin>>n;
    while (n>0){
        output = output*10+n%10;
        n = n/10;
    }
    cout<<output;
    return 0;
}