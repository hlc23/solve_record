#include <iostream>
using namespace std;

int main() {
    int n, A,F;
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>A>>F;
        for (int time = 0; time < F; time++){
            for (int h = 1;h<=A; h++){
                for (int t = 1; t<=h;t++) cout<<h;
                cout<<endl;
            }
            for (int h = A-1; h>=1; h--){
                for (int t = 1; t<=h; t++) cout<<h;
                cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}