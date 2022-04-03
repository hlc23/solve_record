#include <iostream>
using namespace std;

int main() {
    int base,item;
    cin>>base;
    while(cin>>item){
        if (item == 0){
            break;
        }
        else if (item % base == 0){
            cout<<item / base <<endl;
        }
        else {
            cout<<base - (item%base)<<endl;
        }
    }
    return 0;
}
