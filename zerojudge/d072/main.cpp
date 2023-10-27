#include<iostream>
using namespace std;

int main(){
    int n,y;
    cin>>n;
    n = n+1 ;
    for (int t = 1; t < n ;t++){   
        cin>>y;
        cout<<"Case "<<t<<": ";
        if( y%400==0 or ( y%4==0 and y%100!=0 ) )
            cout << "a leap year" << endl;
        else
            cout << "a normal year" << endl;
    }
    return 0;
}
