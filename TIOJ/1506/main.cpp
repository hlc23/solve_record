#include<bits/stdc++.h>
using namespace std;

signed main(){
	float a1, a2, b1, b2;
	cin>>a1>>a2>>b1>>b2;
	float x, y;
	x = -(b1-b2)/(a1-a2)*100;
	y = (a1*b2-a2*b1)/(a1-a2)*100;
	cout<<fixed<<setprecision(2);
	cout<<round(x)/100<<"\n"<<round(y)/100;
	return 0;
}