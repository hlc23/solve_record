#include <iostream>
using namespace std;

int cl(int n){
	if (n==1) return 1;
	else if (n%2==1) return cl(3*n+1)+1;
	else return cl(n/2)+1;
}

int main(){
    int n;
    cin.tie(nullptr);
	ios::sync_with_stdio(0);
    while (std::cin>>n){
        std::cout<<cl(n)-1<<"\n";
	}
	return 0;
}
