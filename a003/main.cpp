//https://zerojudge.tw/ShowProblem?problemid=a003

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int M,D;
	cin>>M>>D;
	if ((M*2+D)%3 == 0){
		cout<<"´¶";
	}
	else if ((M*2+D)%3 == 1){
		cout<<"¦N";
	}
	else{
		cout<<"¤j¦N";
	}
}
