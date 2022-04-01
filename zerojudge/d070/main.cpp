#include<iostream>
using namespace std;

int main()
{
    int n;
    while( cin >> n and n !=0)
    {
        if( n%400==0 or ( n%4==0 and n%100!=0 ) )
            cout << "a leap year" << endl;
        else
            cout << "a normal year" << endl;
    }
    return 0;
}
