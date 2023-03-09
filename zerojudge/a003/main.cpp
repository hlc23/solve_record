#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int M,D;
	cin>>M>>D;
	int S = (M*2+D)%3;
	if (S == 0){
		cout<<"普通";
	}
	else if (S == 1){
		cout<<"吉";
	}
	else{
		cout<<"大吉";
	}
}
