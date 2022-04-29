#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int Case=0,num;
    while(cin>>num){
        int count=0;
        Case++;
        vector<int> vec(num,0);
        for(int i=0;i<num;i++){
            cin>>vec[i];    
        }
        for(int n=0;n<num;n++){
            for(int m=n;m<num;m++){
                int a=vec[n]+vec[m];
                vec.push_back(a);
            }
        }
        for(int i=num;i<vec.size();i++){
            for(int n=i+1;n<vec.size();n++){
                if(vec[i]==vec[n]){
                    cout<<"Case #"<<Case<<": It is not a B2-Sequence."<<endl<<endl;
                    count++;
                    break;
                }
            }
            if(count==1)break;
        }
        if(count==0)
        cout<<"Case #"<<Case<<": It is a B2-Sequence."<<endl<<endl;
        }
    return 0;
}
