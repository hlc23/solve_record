#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_case, a, b, sum, case_num = 1;
    cin>>test_case;
    for (int t = 0; t<test_case; t++){
        sum = 0;
        for (cin>>a>>b; a<=b; a++){
            if (a%2 == 1){
                sum += a;
            }
        }
        cout<<"Case "<<case_num<<": "<<sum<<endl;
        case_num ++;
    }
    return 0;
}
