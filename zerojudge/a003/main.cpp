#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int M,D;
	cin>>M>>D;
	if ((M*2+D)%3 == 0){
		cout<<"普通";
	}
	else if ((M*2+D)%3 == 1){
		cout<<"吉";
	}
	else{
		cout<<"大吉";
	}
}
