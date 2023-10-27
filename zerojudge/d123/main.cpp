#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    int Case=0,num; // initialize variables
    while(cin>>num){ // read input until end of file
        int count=0; // initialize count variable
        Case++; // increment case number
        vector<int> vec(num,0); // create vector of size num, initialized to 0
        for(int i=0;i<num;i++){ // read num integers into vector
            cin>>vec[i];    
        }
        for(int n=0;n<num;n++){ // loop through all pairs of integers in vector
            for(int m=n;m<num;m++){
                int a=vec[n]+vec[m]; // calculate sum of pair
                vec.push_back(a); // add sum to vector
            }
        }
        for(int i=num;i<vec.size();i++){ // loop through all sums in vector
            for(int n=i+1;n<vec.size();n++){ // check for duplicates
                if(vec[i]==vec[n]){ // if duplicate found
                    cout<<"Case #"<<Case<<": It is not a B2-Sequence."<<endl<<endl; // output result
                    count++; // increment count
                    break; // exit loop
                }
            }
            if(count==1)break; // exit loop if duplicate found
        }
        if(count==0) // if no duplicates found
        cout<<"Case #"<<Case<<": It is a B2-Sequence."<<endl<<endl; // output result
    }
    return 0; // exit program
}
