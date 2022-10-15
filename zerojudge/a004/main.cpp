#include<iostream>
using namespace std;
int main(){
    int year;
    while (cin>>year){
    if ( year%400==0 or ( year%4==0 and year%100!=0 ) ) cout<<"閏年"<<endl;
    else cout<<"平年"<<endl;
    }
}