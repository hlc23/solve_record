#include<bits/stdc++.h>
using namespace std;

int number_parse(char c){
	switch(c){
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        default:
            return -1;
    }
}

int table(char c){
    switch(c){
        case 'A':return 10;
        case 'B':return 11;
        case 'C':return 12;
        case 'D':return 13;
        case 'E':return 14;
        case 'F':return 15;
        case 'G':return 16;
        case 'H':return 17;
        case 'I':return 34;
        case 'J':return 18;
        case 'K':return 19;
        case 'L':return 20;
        case 'M':return 21;
        case 'N':return 22;
        case 'O':return 35;
        case 'P':return 23;
        case 'Q':return 24;
        case 'R':return 25;
        case 'S':return 26;
        case 'T':return 27;
        case 'U':return 28;
        case 'V':return 29;
        case 'W':return 32;
        case 'X':return 30;
        case 'Y':return 31;
        case 'Z':return 33;
    }
}

signed main(){
	string v;
	cin>>v;
    int n1 = table(v[0]);
    int n2 = n1%10*9+(int)n1/10;
    int n3 = 0, tmp = 0;
    for (int i = 1; i < 9; i++){
        tmp += number_parse(v[i])*(9-i);
    }
    n3 = n2+tmp+number_parse(v[9]);
    if (n3 % 10 == 0) cout<<"real";
    else cout<<"fake";

    
    return 0;
}