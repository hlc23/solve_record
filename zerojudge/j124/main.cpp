#include<iostream>
#define int long long
using namespace std;

int f(int r){
	int n;
	cin>>n;
	if (n==0) return 0;
	int add = abs(r-n);
	if (n%2) return add+f(n)+f(n)+f(n);
	else return add+f(n)+f(n);
}

signed main(){
	int r;
	cin>>r;
	if (r%2) cout<<f(r)+f(r)+f(r);
	else cout<<f(r)+f(r);
}