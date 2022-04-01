#include <bits/stdc++.h>
using namespace std;
//將小時轉為分鐘 
int h2m(int h){
	return 60*h;
}

int main(int argc, char** argv) {
	int h1,m1,h2,m2,M1,M2;
	while(cin>>h1>>m1>>h2>>m2){
		if (h1 == 0,h2 == 0,m1 == 0 ,m2 == 0){
		}
		else{
			M1 = h2m(h1)+m1;
			M2 = h2m(h2)+m2;
			if (M1 > M2){
				cout<<(M2+1440)-M1<<endl;
			}
			else{
				cout<<M2-M1<<endl;
			}
		}
	}
	return 0;
}
